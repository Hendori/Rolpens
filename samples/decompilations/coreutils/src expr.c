
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void require_more_args(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*args != (char *)0x0) {
    return;
  }
  uVar1 = quotearg_n_style(0,8,args[-1]);
  uVar2 = dcgettext(0,"syntax error: missing argument after %s",5);
                    /* WARNING: Subroutine does not return */
  error(2,0,uVar2,uVar1);
}



/* WARNING: Unknown calling convention */

_Bool toarith(VALUE *v)

{
  char *__ptr;
  int iVar1;
  char *pcVar2;
  
  if (v->type == integer) {
    return true;
  }
  __ptr = (v->u).s;
  pcVar2 = __ptr + (*__ptr == '-');
  do {
    if (9 < (int)*pcVar2 - 0x30U) {
      return false;
    }
    pcVar2 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  iVar1 = mpz_init_set_str(&v->u,__ptr,10);
  if (iVar1 == 0) {
    free(__ptr);
    v->type = integer;
    return true;
  }
                    /* WARNING: Subroutine does not return */
  error(3,0x22,&_LC1,__ptr);
}



/* WARNING: Unknown calling convention */

_Bool null(VALUE *v)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  _Bool _Var4;
  
  if (v->type == integer) {
    iVar2 = mpz_sgn(&v->u);
    return iVar2 == 0;
  }
  _Var4 = true;
  cVar1 = *(v->u).s;
  if (cVar1 != '\0') {
    pcVar3 = (v->u).s + (cVar1 == '-');
    while (*pcVar3 == '0') {
      pcVar3 = pcVar3 + 1;
      if (*pcVar3 == '\0') {
        return true;
      }
    }
    _Var4 = false;
  }
  return _Var4;
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
    iVar2 = strcmp("expr",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)piVar6 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

VALUE * docolon(VALUE *sv,VALUE *pv)

{
  char *pcVar1;
  TYPE TVar2;
  long lVar3;
  int iVar4;
  size_t sVar5;
  char *pcVar6;
  VALUE *pVVar7;
  ulong uVar8;
  undefined8 uVar9;
  int *piVar10;
  char *pcVar11;
  VALUE *v;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  char32_t ch;
  re_registers re_regs;
  re_pattern_buffer re_buffer;
  mbstate_t mbs;
  char fastmap [256];
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (sv->type == integer) {
    pcVar6 = (char *)mpz_get_str(0,10,&sv->u);
    mpz_clear(&sv->u);
    sv->type = string;
    TVar2 = pv->type;
    (sv->u).s = pcVar6;
    if (TVar2 == integer) goto LAB_0010080b;
LAB_0010061f:
    pcVar6 = (pv->u).s;
  }
  else {
    if (pv->type != integer) goto LAB_0010061f;
LAB_0010080b:
    pcVar6 = (char *)mpz_get_str(0,10,&pv->u);
    mpz_clear(&pv->u);
    (pv->u).s = pcVar6;
    pv->type = string;
  }
  re_buffer.fastmap = fastmap;
  re_regs.num_regs = 0;
  re_buffer.buffer = (re_dfa_t *)0x0;
  re_buffer.allocated = 0;
  re_buffer.translate = (uchar *)0x0;
  _re_syntax_options = 0x2c6;
  re_regs.start = (regoff_t *)0x0;
  re_regs.end = (regoff_t *)0x0;
  sVar5 = strlen(pcVar6);
  pcVar6 = re_compile_pattern(pcVar6,sVar5,(re_pattern_buffer *)&re_buffer);
  if (pcVar6 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    error(2,0,&_LC1,pcVar6);
  }
  pcVar6 = (sv->u).s;
  re_buffer._56_1_ = re_buffer._56_1_ & 0x7f;
  sVar5 = strlen(pcVar6);
  iVar4 = re_match((re_pattern_buffer *)&re_buffer,pcVar6,(int)sVar5,0,(re_registers *)&re_regs);
  if (iVar4 < 0) {
    if (iVar4 != -1) {
      uVar9 = dcgettext(0,"error in regular expression matcher",5);
      iVar14 = 0x4b;
      if (iVar4 == -2) {
        piVar10 = __errno_location();
        iVar14 = *piVar10;
      }
                    /* WARNING: Subroutine does not return */
      error(3,iVar14,uVar9);
    }
    if (re_buffer.re_nsub == 0) {
      pVVar7 = (VALUE *)xmalloc(0x18);
      pVVar7->type = integer;
      mpz_init_set_ui(&pVVar7->u,0);
      goto joined_r0x00100795;
    }
  }
  else {
    if (re_buffer.re_nsub == 0) {
      sVar5 = __ctype_get_mb_cur_max();
      uVar15 = (long)iVar4;
      if (sVar5 != 1) {
        pcVar6 = (sv->u).s;
        uVar12 = 0;
        uVar15 = 0;
        if (iVar4 == 0) {
          uVar15 = 0;
        }
        else {
          do {
            pcVar1 = pcVar6 + uVar12;
            if (*pcVar1 == '\0') break;
            uVar15 = uVar15 + 1;
            uVar13 = 1;
            if (*pcVar1 < '\0') {
              pcVar11 = pcVar1 + (2 - (ulong)(pcVar1[1] == '\0'));
              mbs.__count = 0;
              uVar8 = mbrtoc32(&ch,pcVar1,
                               pcVar11 + (*pcVar11 != '\0') +
                               ((ulong)(pcVar11[*pcVar11 != '\0'] != '\0') - (long)pcVar1),&mbs);
              if (-1 < (long)uVar8) {
                uVar13 = uVar8 & 0xff;
              }
            }
            uVar12 = uVar12 + uVar13;
          } while (uVar12 < (ulong)(long)iVar4);
        }
      }
      pVVar7 = (VALUE *)xmalloc(0x18);
      pVVar7->type = integer;
      mpz_init_set_ui(&pVVar7->u,uVar15);
      goto joined_r0x00100795;
    }
    if (-1 < re_regs.end[1]) {
      (sv->u).s[re_regs.end[1]] = '\0';
      iVar4 = re_regs.start[1];
      pcVar6 = (sv->u).s;
      pVVar7 = (VALUE *)xmalloc(0x18);
      pVVar7->type = string;
      pcVar6 = (char *)xstrdup(pcVar6 + iVar4);
      (pVVar7->u).s = pcVar6;
      goto joined_r0x00100795;
    }
  }
  pVVar7 = (VALUE *)xmalloc(0x18);
  pVVar7->type = string;
  pcVar6 = (char *)xstrdup(&_LC5);
  (pVVar7->u).s = pcVar6;
joined_r0x00100795:
  if (re_regs.num_regs != 0) {
    free(re_regs.start);
    free(re_regs.end);
  }
  re_buffer.fastmap = (char *)0x0;
  regfree((regex_t *)&re_buffer);
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pVVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

VALUE * eval6(_Bool evaluate)

{
  anon_union_16_2_9473010b_for_u *paVar1;
  char **ppcVar2;
  TYPE TVar3;
  long lVar4;
  char32_t cVar5;
  _Bool _Var6;
  char cVar7;
  uint uVar8;
  int iVar9;
  char32_t cVar10;
  VALUE *pVVar11;
  char *pcVar12;
  VALUE *pVVar13;
  undefined8 uVar14;
  VALUE *pVVar15;
  VALUE *v;
  ulong uVar16;
  undefined8 uVar17;
  size_t sVar18;
  long lVar19;
  void *__ptr;
  char *pcVar20;
  ulong uVar21;
  char *pcVar22;
  byte bVar23;
  byte *pbVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  char *pcVar29;
  long in_FS_OFFSET;
  _Bool local_78;
  char32_t ch;
  mbstate_t mbs;
  
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar24 = (byte *)*args;
  if (pbVar24 == (byte *)0x0) goto LAB_00100eb8;
  uVar8 = *pbVar24 - 0x2b;
  if (uVar8 == 0) {
    uVar8 = (uint)pbVar24[1];
  }
  ppcVar2 = args + (uVar8 == 0);
  args = ppcVar2;
  if (uVar8 == 0) {
    require_more_args();
    pcVar12 = *args;
    args = args + 1;
    pVVar11 = (VALUE *)xmalloc(0x18);
    pVVar11->type = string;
    pcVar12 = (char *)xstrdup(pcVar12);
    (pVVar11->u).s = pcVar12;
    goto LAB_001009d8;
  }
  if (*ppcVar2 == (char *)0x0) goto LAB_00100eb8;
  iVar9 = strcmp(*ppcVar2,"length");
  ppcVar2 = ppcVar2 + (iVar9 == 0);
  args = ppcVar2;
  if (iVar9 == 0) {
    pVVar13 = eval6(evaluate);
    if (pVVar13->type == integer) {
      pcVar12 = (char *)mpz_get_str(0,10,&pVVar13->u);
      mpz_clear(&pVVar13->u);
      (pVVar13->u).s = pcVar12;
      pVVar13->type = string;
    }
    else {
      pcVar12 = (pVVar13->u).s;
    }
    uVar14 = mbslen(pcVar12);
    pVVar11 = (VALUE *)xmalloc(0x18);
    pVVar11->type = integer;
    mpz_init_set_ui(&pVVar11->u,uVar14);
    TVar3 = pVVar13->type;
joined_r0x00100bc1:
    if (TVar3 == string) {
      free((pVVar13->u).s);
    }
    else {
      mpz_clear(&pVVar13->u);
    }
    free(pVVar13);
  }
  else {
    if (*ppcVar2 == (char *)0x0) goto LAB_00100eb8;
    iVar9 = strcmp(*ppcVar2,"match");
    ppcVar2 = ppcVar2 + (iVar9 == 0);
    args = ppcVar2;
    if (iVar9 == 0) {
      pVVar13 = eval6(evaluate);
      pVVar15 = eval6(evaluate);
      pVVar11 = pVVar13;
      if (evaluate) {
        pVVar11 = docolon(pVVar13,pVVar15);
        if (pVVar13->type == string) {
          free((pVVar13->u).s);
        }
        else {
          mpz_clear(&pVVar13->u);
        }
        free(pVVar13);
      }
      if (pVVar15->type == string) {
        free((pVVar15->u).s);
      }
      else {
        mpz_clear(&pVVar15->u);
      }
      free(pVVar15);
      goto LAB_001009d8;
    }
    if (*ppcVar2 != (char *)0x0) {
      iVar9 = strcmp(*ppcVar2,"index");
      ppcVar2 = ppcVar2 + (iVar9 == 0);
      args = ppcVar2;
      if (iVar9 == 0) {
        pVVar15 = eval6(evaluate);
        pVVar13 = eval6(evaluate);
        if (pVVar15->type == integer) {
          pcVar12 = (char *)mpz_get_str(0,10,&pVVar15->u);
          mpz_clear(&pVVar15->u);
          (pVVar15->u).s = pcVar12;
          pVVar15->type = string;
        }
        if (pVVar13->type == integer) {
          pcVar12 = (char *)mpz_get_str(0,10,&pVVar13->u);
          mpz_clear(&pVVar13->u);
          (pVVar13->u).s = pcVar12;
          pVVar13->type = string;
        }
        else {
          pcVar12 = (pVVar13->u).s;
        }
        pcVar29 = (pVVar15->u).s;
        if (*pcVar12 == '\0') {
LAB_00100b81:
          lVar27 = 0;
        }
        else {
          sVar18 = __ctype_get_mb_cur_max();
          if (1 < sVar18) {
            cVar7 = *pcVar29;
            if (cVar7 != '\0') {
              lVar27 = 0;
              do {
                lVar27 = lVar27 + 1;
                if (cVar7 < '\0') {
                  pcVar20 = pcVar29 + (2 - (ulong)(pcVar29[1] == '\0'));
                  mbs.__count = 0;
                  uVar21 = mbrtoc32(&ch,pcVar29,
                                    pcVar20 + (*pcVar20 != '\0') +
                                    ((ulong)(pcVar20[*pcVar20 != '\0'] != '\0') - (long)pcVar29));
                  cVar5 = ch;
                  if (((long)uVar21 < 0) || (uVar28 = uVar21 & 0xffffffff, (char)uVar21 == '\x01'))
                  goto LAB_00100faa;
                  cVar7 = *pcVar12;
                  pcVar20 = pcVar12;
                  while (cVar7 != '\0') {
                    cVar10 = (char32_t)cVar7;
                    if (cVar7 < '\0') {
                      pcVar22 = pcVar20 + (2 - (ulong)(pcVar20[1] == '\0'));
                      mbs.__count = 0;
                      lVar19 = mbrtoc32(&ch,pcVar20,
                                        pcVar22 + (*pcVar22 != '\0') +
                                        ((ulong)(pcVar22[*pcVar22 != '\0'] != '\0') - (long)pcVar20)
                                        ,&mbs);
                      cVar10 = ch;
                      if (-1 < lVar19) goto LAB_00101275;
                      bVar23 = 1;
                    }
                    else {
                      lVar19 = 1;
LAB_00101275:
                      bVar23 = (byte)lVar19;
                      if (cVar5 == cVar10) goto LAB_00100b84;
                    }
                    pcVar20 = pcVar20 + bVar23;
                    cVar7 = *pcVar20;
                  }
                }
                else {
LAB_00100faa:
                  lVar19 = mbschr(pcVar12,(int)*pcVar29);
                  if (lVar19 != 0) goto LAB_00100b84;
                  uVar28 = 1;
                }
                pcVar29 = pcVar29 + (uVar28 & 0xff);
                cVar7 = *pcVar29;
              } while (cVar7 != '\0');
            }
            goto LAB_00100b81;
          }
          sVar18 = strcspn(pcVar29,pcVar12);
          if (pcVar29[sVar18] == '\0') goto LAB_00100b81;
          lVar27 = sVar18 + 1;
        }
LAB_00100b84:
        pVVar11 = (VALUE *)xmalloc(0x18);
        pVVar11->type = integer;
        mpz_init_set_ui(&pVVar11->u,lVar27);
        if (pVVar15->type == string) {
          free((pVVar15->u).s);
        }
        else {
          mpz_clear(&pVVar15->u);
        }
        free(pVVar15);
        TVar3 = pVVar13->type;
        goto joined_r0x00100bc1;
      }
      if (*ppcVar2 != (char *)0x0) {
        iVar9 = strcmp(*ppcVar2,"substr");
        args = ppcVar2 + (iVar9 == 0);
        if (iVar9 == 0) {
          pVVar13 = eval6(evaluate);
          pVVar15 = eval6(evaluate);
          v = eval6(evaluate);
          if (pVVar13->type == integer) {
            pcVar12 = (char *)mpz_get_str(0,10,&pVVar13->u);
            mpz_clear(&pVVar13->u);
            (pVVar13->u).s = pcVar12;
            pVVar13->type = string;
          }
          _Var6 = toarith(pVVar15);
          if ((_Var6) && (_Var6 = toarith(v), _Var6)) {
            paVar1 = &pVVar15->u;
            iVar9 = mpz_sgn(paVar1);
            if (iVar9 < 0) {
              local_78 = false;
              uVar21 = 0xffffffffffffffff;
            }
            else {
              iVar9 = mpz_fits_ulong_p(paVar1);
              if (iVar9 == 0) {
                local_78 = false;
                uVar21 = 0xfffffffffffffffe;
              }
              else {
                uVar28 = mpz_get_ui(paVar1);
                uVar21 = 0xfffffffffffffffe;
                if (uVar28 != 0xffffffffffffffff) {
                  uVar21 = uVar28;
                }
                local_78 = uVar28 == 0;
              }
            }
            paVar1 = &v->u;
            iVar9 = mpz_sgn(paVar1);
            if (iVar9 < 0) {
              uVar28 = 0xffffffffffffffff;
              local_78 = _Var6;
            }
            else {
              iVar9 = mpz_fits_ulong_p(paVar1);
              uVar28 = 0xfffffffffffffffe;
              if (iVar9 != 0) {
                uVar16 = mpz_get_ui(paVar1);
                uVar28 = 0xfffffffffffffffe;
                if (uVar16 != 0xffffffffffffffff) {
                  uVar28 = uVar16;
                }
              }
            }
            pcVar12 = (pVVar13->u).s;
            sVar18 = __ctype_get_mb_cur_max();
            if (sVar18 < 2) {
              uVar16 = strlen(pcVar12);
              if (uVar21 <= uVar16) goto LAB_0010118e;
              uVar25 = 0;
              uVar16 = 0;
              if (local_78 != false) goto LAB_001011b7;
LAB_001011af:
              uVar25 = uVar16;
              pcVar12 = pcVar12 + (uVar21 - 1);
            }
            else {
              uVar16 = mbslen();
              if (uVar16 < uVar21) {
                uVar25 = 0;
                uVar16 = 0;
                if (local_78 == false) {
LAB_00100d2c:
                  cVar7 = *pcVar12;
                  if (uVar16 != 0) {
                    uVar25 = 0;
                    uVar28 = 1;
                    pcVar29 = pcVar12;
                    if (cVar7 != '\0') {
                      do {
                        uVar26 = 1;
                        if (cVar7 < '\0') {
                          pcVar20 = pcVar29 + (2 - (ulong)(pcVar29[1] == '\0'));
                          mbs.__count = 0;
                          lVar27 = mbrtoc32(&ch,pcVar29,
                                            pcVar20 + (*pcVar20 != '\0') +
                                            ((ulong)(pcVar20[*pcVar20 != '\0'] != '\0') -
                                            (long)pcVar29),&mbs);
                          bVar23 = (byte)lVar27;
                          if (lVar27 < 0) {
                            bVar23 = 1;
                          }
                          uVar26 = (ulong)bVar23;
                        }
                        if (uVar21 <= uVar28) {
                          if (uVar21 == uVar28) {
                            pcVar12 = pcVar29;
                          }
                          uVar16 = uVar16 - 1;
                          uVar25 = uVar25 + uVar26;
                        }
                        pcVar29 = pcVar29 + uVar26;
                        uVar28 = uVar28 + 1;
                        cVar7 = *pcVar29;
                      } while ((cVar7 != '\0') && (uVar16 != 0));
                      goto LAB_001011b7;
                    }
                  }
                  uVar25 = 0;
                }
              }
              else {
LAB_0010118e:
                uVar25 = 0;
                if (local_78 == false) {
                  uVar16 = (uVar16 - uVar21) + 1;
                  if (uVar28 < uVar16) {
                    uVar16 = uVar28;
                  }
                  if (sVar18 < 2) goto LAB_001011af;
                  goto LAB_00100d2c;
                }
              }
            }
LAB_001011b7:
            __ptr = (void *)ximemdup0(pcVar12,uVar25);
            pVVar11 = (VALUE *)xmalloc(0x18);
            pVVar11->type = string;
            pcVar12 = (char *)xstrdup(__ptr);
            (pVVar11->u).s = pcVar12;
            free(__ptr);
          }
          else {
            pVVar11 = (VALUE *)xmalloc(0x18);
            pVVar11->type = string;
            pcVar12 = (char *)xstrdup(&_LC5);
            (pVVar11->u).s = pcVar12;
          }
          if (pVVar13->type == string) {
            free((pVVar13->u).s);
          }
          else {
            mpz_clear(&pVVar13->u);
          }
          free(pVVar13);
          if (pVVar15->type == string) {
            free((pVVar15->u).s);
          }
          else {
            mpz_clear(&pVVar15->u);
          }
          free(pVVar15);
          if (v->type == string) {
            free((v->u).s);
          }
          else {
            mpz_clear(&v->u);
          }
          free(v);
          goto LAB_001009d8;
        }
      }
    }
LAB_00100eb8:
    require_more_args();
    pbVar24 = (byte *)*args;
    if (pbVar24 != (byte *)0x0) {
      uVar8 = *pbVar24 - 0x28;
      if (uVar8 == 0) {
        uVar8 = (uint)pbVar24[1];
      }
      args = args + (uVar8 == 0);
      if (uVar8 == 0) {
        pVVar11 = eval(evaluate);
        pbVar24 = (byte *)*args;
        if (pbVar24 == (byte *)0x0) {
          uVar14 = quotearg_n_style(0,8,args[-1]);
          pcVar12 = "syntax error: expecting \')\' after %s";
        }
        else {
          uVar8 = *pbVar24 - 0x29;
          if (uVar8 == 0) {
            uVar8 = (uint)pbVar24[1];
          }
          args = args + (uVar8 == 0);
          if (uVar8 == 0) goto LAB_001009d8;
          uVar14 = quotearg_n_style(0,8,*args);
          pcVar12 = "syntax error: expecting \')\' instead of %s";
        }
        uVar17 = dcgettext(0,pcVar12,5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar17,uVar14);
      }
      pbVar24 = (byte *)*args;
      if (pbVar24 != (byte *)0x0) {
        uVar8 = *pbVar24 - 0x29;
        if (uVar8 == 0) {
          uVar8 = (uint)pbVar24[1];
        }
        args = args + (uVar8 == 0);
        if (uVar8 == 0) {
          uVar14 = dcgettext(0,"syntax error: unexpected \')\'",5);
                    /* WARNING: Subroutine does not return */
          error(2,0,uVar14);
        }
        pbVar24 = (byte *)*args;
      }
    }
    args = args + 1;
    pVVar11 = (VALUE *)xmalloc(0x18);
    pVVar11->type = string;
    pcVar12 = (char *)xstrdup(pbVar24);
    (pVVar11->u).s = pcVar12;
  }
LAB_001009d8:
  if (lVar4 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pVVar11;
}



/* WARNING: Unknown calling convention */

VALUE * eval5(_Bool evaluate)

{
  byte *pbVar1;
  uint uVar2;
  VALUE *sv;
  VALUE *pv;
  VALUE *pVVar3;
  
  sv = eval6(evaluate);
  pbVar1 = (byte *)*args;
  while( true ) {
    if (pbVar1 == (byte *)0x0) {
      return sv;
    }
    uVar2 = *pbVar1 - 0x3a;
    if (uVar2 == 0) {
      uVar2 = (uint)pbVar1[1];
    }
    args = args + (uVar2 == 0);
    if (uVar2 != 0) break;
    pv = eval6(evaluate);
    pVVar3 = sv;
    if (evaluate) {
      pVVar3 = docolon(sv,pv);
      if (sv->type == string) {
        free((sv->u).s);
      }
      else {
        mpz_clear(&sv->u);
      }
      free(sv);
    }
    if (pv->type == string) {
      free((pv->u).s);
    }
    else {
      mpz_clear(&pv->u);
    }
    free(pv);
    pbVar1 = (byte *)*args;
    sv = pVVar3;
  }
  return sv;
}



/* WARNING: Unknown calling convention */

VALUE * eval4(_Bool evaluate)

{
  byte *pbVar1;
  _Bool _Var2;
  uint uVar3;
  int iVar4;
  VALUE *v;
  VALUE *v_00;
  code *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  int iVar8;
  
  v = eval5(evaluate);
  do {
    pbVar1 = (byte *)*args;
    if (pbVar1 == (byte *)0x0) {
      return v;
    }
    uVar3 = *pbVar1 - 0x2a;
    if (uVar3 == 0) {
      uVar3 = (uint)pbVar1[1];
    }
    iVar8 = 0;
    args = args + (uVar3 == 0);
    if (uVar3 != 0) {
      pbVar1 = (byte *)*args;
      if (pbVar1 == (byte *)0x0) {
        return v;
      }
      uVar3 = *pbVar1 - 0x2f;
      if (uVar3 == 0) {
        uVar3 = (uint)pbVar1[1];
      }
      iVar8 = 1;
      args = args + (uVar3 == 0);
      if (uVar3 != 0) {
        pbVar1 = (byte *)*args;
        if (pbVar1 == (byte *)0x0) {
          return v;
        }
        uVar3 = *pbVar1 - 0x25;
        if (uVar3 == 0) {
          uVar3 = (uint)pbVar1[1];
        }
        args = args + (uVar3 == 0);
        if (uVar3 != 0) {
          return v;
        }
        iVar8 = 2;
      }
    }
    v_00 = eval5(evaluate);
    if (evaluate) {
      _Var2 = toarith(v);
      if ((!_Var2) || (_Var2 = toarith(v_00), !_Var2)) {
        pcVar7 = "non-integer argument";
LAB_00101626:
        uVar6 = dcgettext(0,pcVar7,5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar6);
      }
      if (iVar8 == 0) {
        pcVar5 = mpz_mul;
      }
      else {
        iVar4 = mpz_sgn(&v_00->u);
        if (iVar4 == 0) {
          pcVar7 = "division by zero";
          goto LAB_00101626;
        }
        if (iVar8 == 1) {
          pcVar5 = mpz_tdiv_q;
        }
        else {
          pcVar5 = mpz_tdiv_r;
        }
      }
      (*pcVar5)(&v->u,&v->u,&v_00->u);
    }
    if (v_00->type == string) {
      free((v_00->u).s);
    }
    else {
      mpz_clear(&v_00->u);
    }
    free(v_00);
  } while( true );
}



/* WARNING: Unknown calling convention */

VALUE * eval3(_Bool evaluate)

{
  byte *pbVar1;
  bool bVar2;
  _Bool _Var3;
  uint uVar4;
  VALUE *v;
  VALUE *v_00;
  code *pcVar5;
  undefined8 uVar6;
  
  v = eval4(evaluate);
  do {
    pbVar1 = (byte *)*args;
    if (pbVar1 == (byte *)0x0) {
      return v;
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
        return v;
      }
      uVar4 = *pbVar1 - 0x2d;
      if (uVar4 == 0) {
        uVar4 = (uint)pbVar1[1];
      }
      args = args + (uVar4 == 0);
      if (uVar4 != 0) {
        return v;
      }
      bVar2 = true;
    }
    v_00 = eval4(evaluate);
    if (evaluate) {
      _Var3 = toarith(v);
      if ((!_Var3) || (_Var3 = toarith(v_00), !_Var3)) {
        uVar6 = dcgettext(0,"non-integer argument",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar6);
      }
      if (bVar2) {
        pcVar5 = mpz_sub;
      }
      else {
        pcVar5 = mpz_add;
      }
      (*pcVar5)(&v->u,&v->u,&v_00->u);
    }
    if (v_00->type == string) {
      free((v_00->u).s);
    }
    else {
      mpz_clear(&v_00->u);
    }
    free(v_00);
  } while( true );
}



/* WARNING: Unknown calling convention */

VALUE * eval2(_Bool evaluate)

{
  TYPE TVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  VALUE *__ptr;
  VALUE *__ptr_00;
  char *pcVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  __ptr = eval3(evaluate);
LAB_00101813:
  pbVar2 = (byte *)*args;
  if (pbVar2 == (byte *)0x0) {
    return __ptr;
  }
  uVar3 = *pbVar2 - 0x3c;
  if (uVar3 == 0) {
    uVar3 = (uint)pbVar2[1];
  }
  uVar8 = 0;
  args = args + (uVar3 == 0);
  if (uVar3 != 0) {
    pbVar2 = (byte *)*args;
    if (pbVar2 == (byte *)0x0) {
      return __ptr;
    }
    uVar3 = *pbVar2 - 0x3c;
    if ((uVar3 == 0) && (uVar3 = pbVar2[1] - 0x3d, uVar3 == 0)) {
      uVar3 = (uint)pbVar2[2];
    }
    uVar8 = 1;
    args = args + (uVar3 == 0);
    if (uVar3 != 0) {
      pbVar2 = (byte *)*args;
      if (pbVar2 == (byte *)0x0) {
        return __ptr;
      }
      uVar3 = *pbVar2 - 0x3d;
      if (uVar3 == 0) {
        uVar3 = (uint)pbVar2[1];
      }
      args = args + (uVar3 == 0);
      if (uVar3 != 0) {
        pbVar2 = (byte *)*args;
        if (pbVar2 == (byte *)0x0) {
          return __ptr;
        }
        uVar3 = *pbVar2 - 0x3d;
        if ((uVar3 == 0) && (uVar3 = pbVar2[1] - 0x3d, uVar3 == 0)) {
          uVar3 = (uint)pbVar2[2];
        }
        args = args + (uVar3 == 0);
        if (uVar3 != 0) {
          pbVar2 = (byte *)*args;
          if (pbVar2 == (byte *)0x0) {
            return __ptr;
          }
          uVar3 = *pbVar2 - 0x21;
          if ((uVar3 == 0) && (uVar3 = pbVar2[1] - 0x3d, uVar3 == 0)) {
            uVar3 = (uint)pbVar2[2];
          }
          uVar8 = 3;
          args = args + (uVar3 == 0);
          if (uVar3 != 0) {
            pbVar2 = (byte *)*args;
            if (pbVar2 == (byte *)0x0) {
              return __ptr;
            }
            uVar3 = *pbVar2 - 0x3e;
            if ((uVar3 == 0) && (uVar3 = pbVar2[1] - 0x3d, uVar3 == 0)) {
              uVar3 = (uint)pbVar2[2];
            }
            uVar8 = 4;
            args = args + (uVar3 == 0);
            if (uVar3 != 0) {
              pbVar2 = (byte *)*args;
              if (pbVar2 == (byte *)0x0) {
                return __ptr;
              }
              uVar3 = *pbVar2 - 0x3e;
              if (uVar3 == 0) {
                uVar3 = (uint)pbVar2[1];
              }
              args = args + (uVar3 == 0);
              if (uVar3 != 0) {
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
  __ptr_00 = eval3(evaluate);
  if (evaluate) {
    if (__ptr->type == integer) {
      pcVar5 = (char *)mpz_get_str(0,10);
      mpz_clear(&__ptr->u);
      __ptr->type = string;
      TVar1 = __ptr_00->type;
      (__ptr->u).s = pcVar5;
    }
    else {
      TVar1 = __ptr_00->type;
    }
    if (TVar1 == integer) {
      pcVar5 = (char *)mpz_get_str(0,10);
      mpz_clear(&__ptr_00->u);
      (__ptr_00->u).s = pcVar5;
      __ptr_00->type = string;
    }
    pcVar5 = (__ptr->u).s + (*(__ptr->u).s == '-');
    do {
      if (9 < (int)*pcVar5 - 0x30U) goto LAB_0010194b;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    pcVar5 = (__ptr_00->u).s + (*(__ptr_00->u).s == '-');
    do {
      if (9 < (int)*pcVar5 - 0x30U) goto LAB_0010194b;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    iVar4 = strintcmp();
    goto LAB_00101963;
  }
  goto LAB_00101863;
LAB_0010194b:
  piVar6 = __errno_location();
  *piVar6 = 0;
  iVar4 = strcoll((__ptr->u).s,(__ptr_00->u).s);
LAB_00101963:
  switch(uVar8) {
  default:
    uVar7 = (ulong)(long)iVar4 >> 0x3f;
    break;
  case 1:
    uVar7 = (ulong)(iVar4 < 1);
    break;
  case 2:
    uVar7 = (ulong)(iVar4 == 0);
    break;
  case 3:
    uVar7 = (ulong)(iVar4 != 0);
    break;
  case 4:
    uVar7 = (ulong)~(long)iVar4 >> 0x3f;
    break;
  case 5:
    uVar7 = (ulong)(0 < iVar4);
  }
LAB_00101863:
  if (__ptr->type == string) {
    free((__ptr->u).s);
    free(__ptr);
    TVar1 = __ptr_00->type;
  }
  else {
    mpz_clear(&__ptr->u);
    free(__ptr);
    TVar1 = __ptr_00->type;
  }
  if (TVar1 == string) {
    free((__ptr_00->u).s);
  }
  else {
    mpz_clear(&__ptr_00->u);
  }
  free(__ptr_00);
  __ptr = (VALUE *)xmalloc(0x18);
  __ptr->type = integer;
  mpz_init_set_ui(&__ptr->u,uVar7);
  goto LAB_00101813;
}



/* WARNING: Unknown calling convention */

VALUE * eval1(_Bool evaluate)

{
  byte *pbVar1;
  _Bool _Var2;
  VALUE *v;
  VALUE *v_00;
  uint uVar3;
  
  v = eval2(evaluate);
  pbVar1 = (byte *)*args;
  while( true ) {
    if (pbVar1 == (byte *)0x0) {
      return v;
    }
    uVar3 = *pbVar1 - 0x26;
    if (uVar3 == 0) {
      uVar3 = (uint)pbVar1[1];
    }
    args = args + (uVar3 == 0);
    if (uVar3 != 0) break;
    _Var2 = false;
    if (evaluate) {
      _Var2 = null(v);
      _Var2 = !_Var2;
    }
    v_00 = eval2(_Var2);
    _Var2 = null(v);
    if ((_Var2) || (_Var2 = null(v_00), _Var2)) {
      if (v->type == string) {
        free((v->u).s);
      }
      else {
        mpz_clear(&v->u);
      }
      free(v);
      if (v_00->type == string) {
        free((v_00->u).s);
      }
      else {
        mpz_clear(&v_00->u);
      }
      free(v_00);
      v = (VALUE *)xmalloc(0x18);
      v->type = integer;
      mpz_init_set_ui(&v->u,0);
    }
    else {
      if (v_00->type == string) {
        free((v_00->u).s);
      }
      else {
        mpz_clear(&v_00->u);
      }
      free(v_00);
    }
    pbVar1 = (byte *)*args;
  }
  return v;
}



/* WARNING: Unknown calling convention */

VALUE * eval(_Bool evaluate)

{
  _Bool _Var1;
  VALUE *v;
  byte *pbVar2;
  VALUE *v_00;
  uint uVar3;
  
  v = eval1(evaluate);
  pbVar2 = (byte *)*args;
  do {
    if (pbVar2 == (byte *)0x0) {
      return v;
    }
    while( true ) {
      uVar3 = *pbVar2 - 0x7c;
      if (uVar3 == 0) {
        uVar3 = (uint)pbVar2[1];
      }
      args = args + (uVar3 == 0);
      if (uVar3 != 0) {
        return v;
      }
      _Var1 = false;
      if (evaluate) {
        _Var1 = null(v);
      }
      v_00 = eval1(_Var1);
      _Var1 = null(v);
      if (_Var1) break;
      if (v_00->type == string) {
        free((v_00->u).s);
      }
      else {
        mpz_clear(&v_00->u);
      }
      free(v_00);
      pbVar2 = (byte *)*args;
      if (pbVar2 == (byte *)0x0) {
        return v;
      }
    }
    if (v->type == string) {
      free((v->u).s);
    }
    else {
      mpz_clear(&v->u);
    }
    free(v);
    _Var1 = null(v_00);
    if (_Var1) {
      if (v_00->type == string) {
        free((v_00->u).s);
      }
      else {
        mpz_clear(&v_00->u);
      }
      free(v_00);
      v_00 = (VALUE *)xmalloc(0x18);
      v_00->type = integer;
      mpz_init_set_ui(&v_00->u,0);
    }
    pbVar2 = (byte *)*args;
    v = v_00;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  char *pcVar1;
  _Bool _Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  VALUE *v;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  _exit_failure = 3;
  atexit((__func *)&close_stdout);
  uVar3 = proper_name_lite("Paul Eggert","Paul Eggert");
  uVar4 = proper_name_lite("James Youngman","James Youngman");
  uVar5 = proper_name_lite("Mike Parker","Mike Parker");
  parse_long_options(argc,argv,&_LC3,"GNU coreutils",&_LC47,usage,uVar5,uVar4,uVar3,0);
  if (1 < argc) {
    pcVar1 = argv[1];
    if (((*pcVar1 == '-') && (pcVar1[1] == '-')) && (pcVar1[2] == '\0')) {
      if (argc == 2) goto LAB_00102ad0;
      argv = argv + 1;
    }
    args = argv + 1;
    v = eval(true);
    if (*args == (char *)0x0) {
      if (v->type == integer) {
        mpz_out_str(_stdout,10,&v->u);
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
        puts((v->u).s);
      }
      _Var2 = null(v);
      return (int)_Var2;
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


