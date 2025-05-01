
/* WARNING: Unknown calling convention */

_Bool all_digits_p(char *s)

{
  size_t sVar1;
  size_t sVar2;
  
  if ((int)*s - 0x30U < 10) {
    sVar1 = strlen(s);
    sVar2 = strspn(s,"0123456789");
    return sVar2 == sVar1;
  }
  return false;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void write_error(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  size_t sVar8;
  size_t __n;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  long extraout_RDX;
  long lVar15;
  char *pcVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  int *piStack_20a0;
  char *pcStack_2088;
  ulong uStack_2058;
  char acStack_2050 [8192];
  char acStack_50 [8];
  undefined8 uStack_48;
  ulong uStack_38;
  
  puVar3 = (uint *)__errno_location();
  uVar1 = *puVar3;
  fflush_unlocked(_stdout);
  fpurge(_stdout);
  clearerr_unlocked(_stdout);
  uVar4 = dcgettext(0,"write error",5);
  piStack_20a0 = (int *)(ulong)uVar1;
  pcVar16 = (char *)0x1;
  error(1,piStack_20a0,uVar4);
  uStack_48 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  pcVar5 = pcVar16;
  if (*pcVar16 == '0') {
    do {
      pcVar11 = pcVar5;
      pcVar5 = pcVar11 + 1;
    } while (pcVar11[1] == '0');
    if ((pcVar16 == pcVar5) || (pcVar16 = pcVar11, pcVar11[1] != '\0')) {
      pcVar16 = pcVar5;
    }
  }
  piVar7 = piStack_20a0;
  if ((char)*piStack_20a0 == '0') {
    do {
      piVar6 = piVar7;
      piVar7 = (int *)((long)piVar6 + 1);
    } while (*(char *)((long)piVar6 + 1) == '0');
    if ((*(char *)((long)piVar6 + 1) != '\0') ||
       (bVar18 = piStack_20a0 == piVar7, piStack_20a0 = piVar6, bVar18)) {
      piStack_20a0 = piVar7;
    }
  }
  uStack_38 = (ulong)uVar1;
  sVar8 = strlen(pcVar16);
  __n = strlen((char *)piStack_20a0);
  if ((__n == 3) && (*piStack_20a0 == 0x666e69)) {
    bVar18 = true;
    if (0x7fffffffffffffe0 < sVar8 - 0x1f) {
LAB_0010039d:
      uVar17 = 0x1f;
      goto LAB_0010017d;
    }
  }
  else {
    if ((long)sVar8 < (long)__n) {
      uVar17 = 0x1f;
      if (0x1e < (long)__n) {
        uVar17 = __n;
      }
      bVar18 = false;
      goto LAB_0010017d;
    }
    bVar18 = false;
    if (sVar8 < 0x1f) goto LAB_0010039d;
  }
  uVar17 = sVar8 + 1;
LAB_0010017d:
  uStack_2058 = uVar17;
  pcStack_2088 = (char *)xmalloc(uVar17);
  pcVar5 = pcStack_2088 + uStack_2058;
  uVar9 = uStack_2058;
  if (uStack_2058 <= uVar17) {
    uVar9 = uVar17;
  }
  uVar14 = uVar9 - uStack_2058;
  if (uVar17 < uVar14) {
    uVar17 = uVar14;
  }
  uVar9 = (uStack_2058 - sVar8) - uVar9;
  uVar10 = uVar9 + uVar17;
  if (CARRY8(uVar9,uVar17)) {
    uVar10 = uVar17;
  }
  pcVar11 = (char *)__memcpy_chk((long)pcVar5 - sVar8,pcVar16,sVar8,
                                 ((uVar14 + sVar8) - uVar17) + uVar10);
  pcVar16 = acStack_2050;
LAB_001001ef:
  sVar8 = (long)pcVar5 - (long)pcVar11;
  pcVar12 = pcVar11;
  if (bVar18) goto LAB_00100262;
  if (__n == sVar8) goto LAB_0010034d;
  iVar2 = (uint)((long)__n < (long)sVar8) - (uint)(__n != sVar8 && (long)sVar8 <= (long)__n);
  do {
    pcVar12 = pcVar11;
    if (iVar2 < 1) {
LAB_00100262:
      do {
        pcVar13 = acStack_50 + -(long)pcVar16;
        if ((long)pcVar5 - (long)pcVar12 < (long)pcVar13) {
          pcVar12 = (char *)mempcpy(pcVar16,pcVar12,(long)pcVar5 - (long)pcVar12);
          pcVar16 = pcVar12 + 1;
          *pcVar12 = *separator;
          lVar15 = extraout_RDX;
          if (pcStack_2088 == pcVar11) {
            pcVar12 = (char *)xpalloc(0,&uStack_2058,1,0xffffffffffffffff,1);
            pcVar5 = pcVar12 + uStack_2058;
            pcVar11 = (char *)memcpy(pcVar5 + -sVar8,pcStack_2088,sVar8);
            free(pcStack_2088);
            pcStack_2088 = pcVar12;
          }
          goto joined_r0x001002a4;
        }
        memcpy(pcVar16,pcVar12,(size_t)pcVar13);
        lVar15 = full_write(1,acStack_2050,0x2000);
        pcVar16 = acStack_2050;
        pcVar12 = pcVar12 + (long)pcVar13;
      } while (lVar15 == 0x2000);
    }
    else {
      pcVar5 = pcVar16 + -(long)acStack_2050;
      if (pcVar5 == (char *)0x0) {
LAB_0010041d:
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      pcVar16[-1] = '\n';
      pcVar12 = (char *)full_write(1,acStack_2050,pcVar5);
      if (pcVar12 == pcVar5) goto LAB_0010041d;
    }
    write_error();
LAB_0010034d:
    iVar2 = memcmp(pcVar11,piStack_20a0,__n);
  } while( true );
joined_r0x001002a4:
  pcVar12 = pcVar5;
  if (lVar15 == 0) goto LAB_001001ef;
  do {
    pcVar13 = pcVar12 + -1;
    if (pcVar12[-1] < '9') {
      *pcVar13 = pcVar12[-1] + '\x01';
      goto LAB_001002d2;
    }
    *pcVar13 = '0';
    pcVar12 = pcVar13;
  } while (pcVar11 < pcVar13);
  pcVar11[-1] = '1';
  pcVar11 = pcVar11 + -1;
LAB_001002d2:
  lVar15 = lVar15 + -1;
  goto joined_r0x001002a4;
}



/* WARNING: Unknown calling convention */

void seq_fast(char *a,char *b,uintmax_t step)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  size_t sVar5;
  size_t __n;
  ulong uVar6;
  ulong uVar7;
  char *__s1;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  uintmax_t uVar12;
  char *pcVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  int *local_2098;
  char *local_2080;
  idx_t inc_size;
  char buf [8192];
  char local_48 [8];
  undefined8 local_40;
  
  local_40 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  pcVar3 = a;
  if (*a == '0') {
    do {
      pcVar13 = pcVar3;
      pcVar3 = pcVar13 + 1;
    } while (pcVar13[1] == '0');
    if ((a == pcVar3) || (a = pcVar13, pcVar13[1] != '\0')) {
      a = pcVar3;
    }
  }
  piVar4 = (int *)b;
  local_2098 = (int *)b;
  if (*b == '0') {
    do {
      local_2098 = piVar4;
      piVar4 = (int *)((long)local_2098 + 1);
    } while (*(char *)((long)local_2098 + 1) == '0');
    if ((*(char *)((long)local_2098 + 1) != '\0') || ((int *)b == piVar4)) {
      local_2098 = piVar4;
    }
  }
  sVar5 = strlen(a);
  __n = strlen((char *)local_2098);
  if ((__n == 3) && (*local_2098 == 0x666e69)) {
    bVar1 = true;
    if (0x7fffffffffffffe0 < sVar5 - 0x1f) {
LAB_0010039d:
      uVar14 = 0x1f;
      goto LAB_0010017d;
    }
  }
  else {
    if ((long)sVar5 < (long)__n) {
      uVar14 = 0x1f;
      if (0x1e < (long)__n) {
        uVar14 = __n;
      }
      bVar1 = false;
      goto LAB_0010017d;
    }
    bVar1 = false;
    if (sVar5 < 0x1f) goto LAB_0010039d;
  }
  uVar14 = sVar5 + 1;
LAB_0010017d:
  inc_size = uVar14;
  local_2080 = (char *)xmalloc(uVar14);
  pcVar3 = local_2080 + inc_size;
  uVar6 = inc_size;
  if ((ulong)inc_size <= uVar14) {
    uVar6 = uVar14;
  }
  uVar11 = uVar6 - inc_size;
  if (uVar14 < uVar11) {
    uVar14 = uVar11;
  }
  uVar6 = (inc_size - sVar5) - uVar6;
  uVar7 = uVar6 + uVar14;
  if (CARRY8(uVar6,uVar14)) {
    uVar7 = uVar14;
  }
  __s1 = (char *)__memcpy_chk((long)pcVar3 - sVar5,a,sVar5,((uVar11 + sVar5) - uVar14) + uVar7);
  pcVar13 = buf;
LAB_001001ef:
  sVar5 = (long)pcVar3 - (long)__s1;
  pcVar9 = __s1;
  if (bVar1) goto LAB_00100262;
  if (__n == sVar5) goto LAB_0010034d;
  iVar2 = (uint)((long)__n < (long)sVar5) - (uint)(__n != sVar5 && (long)sVar5 <= (long)__n);
  do {
    pcVar9 = __s1;
    if (iVar2 < 1) {
LAB_00100262:
      do {
        pcVar10 = local_48 + -(long)pcVar13;
        if ((long)pcVar3 - (long)pcVar9 < (long)pcVar10) {
          pcVar9 = (char *)mempcpy(pcVar13,pcVar9,(long)pcVar3 - (long)pcVar9);
          pcVar13 = pcVar9 + 1;
          *pcVar9 = *separator;
          if (local_2080 == __s1) {
            pcVar9 = (char *)xpalloc(0,&inc_size,1,0xffffffffffffffff,1);
            pcVar3 = pcVar9 + inc_size;
            __s1 = (char *)memcpy(pcVar3 + -sVar5,local_2080,sVar5);
            free(local_2080);
            local_2080 = pcVar9;
          }
          pcVar9 = pcVar3;
          uVar12 = step;
          if (step != 0) goto LAB_001002c0;
          goto LAB_001001ef;
        }
        memcpy(pcVar13,pcVar9,(size_t)pcVar10);
        lVar8 = full_write(1,buf,0x2000);
        pcVar13 = buf;
        pcVar9 = pcVar9 + (long)pcVar10;
      } while (lVar8 == 0x2000);
    }
    else {
      pcVar3 = pcVar13 + -(long)buf;
      if (pcVar3 == (char *)0x0) {
LAB_0010041d:
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      pcVar13[-1] = '\n';
      pcVar9 = (char *)full_write(1,buf,pcVar3);
      if (pcVar9 == pcVar3) goto LAB_0010041d;
    }
    write_error();
LAB_0010034d:
    iVar2 = memcmp(__s1,local_2098,__n);
  } while( true );
LAB_001002c0:
  do {
    pcVar10 = pcVar9 + -1;
    if (pcVar9[-1] < '9') {
      *pcVar10 = pcVar9[-1] + '\x01';
    }
    else {
      *pcVar10 = '0';
      pcVar9 = pcVar10;
      if (__s1 < pcVar10) goto LAB_001002c0;
      __s1[-1] = '1';
      __s1 = __s1 + -1;
    }
    uVar12 = uVar12 - 1;
    pcVar9 = pcVar3;
  } while (uVar12 != 0);
  goto LAB_001001ef;
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
    goto LAB_0010048a;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION]... LAST\n  or:  %s [OPTION]... FIRST LAST\n  or:  %s [OPTION]... FIRST INCREMENT LAST\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Print numbers from FIRST to LAST, in steps of INCREMENT.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -f, --format=FORMAT      use printf style floating-point FORMAT\n  -s, --separator=STRING   use STRING to separate numbers (default: \\n)\n  -w, --equal-width        equalize width by padding with leading zeroes\n"
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
                             "\nIf FIRST or INCREMENT is omitted, it defaults to 1.  That is, an\nomitted INCREMENT defaults to 1 even when LAST is smaller than FIRST.\nThe sequence of numbers ends when the sum of the current number and\nINCREMENT would become greater than LAST.\nFIRST, INCREMENT, and LAST are interpreted as floating point values.\nINCREMENT is usually positive if FIRST is smaller than LAST, and\nINCREMENT is usually negative if FIRST is greater than LAST.\nINCREMENT must not be 0; none of FIRST, INCREMENT and LAST may be NaN.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "FORMAT must be suitable for printing one argument of type \'double\';\nit defaults to %.PRECf if FIRST, INCREMENT, and LAST are all fixed point\ndecimal numbers with maximum precision PREC, and to %g otherwise.\n"
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
    iVar2 = strcmp("seq",pcVar4);
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
    if (pcVar4 != (char *)0x0) goto LAB_001006e5;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC3);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_001006e5:
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
LAB_0010048a:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Unknown calling convention */

operand * scan_arg(char *arg)

{
  long lVar1;
  longdouble lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  ushort **ppuVar6;
  char *pcVar7;
  size_t sVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  operand *in_RDI;
  long in_FS_OFFSET;
  operand ret;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = xstrtold(arg,0,&ret,&cl_strtold);
  if (cVar3 == '\0') {
    uVar13 = quote(arg);
    uVar14 = dcgettext(0,"invalid floating point argument: %s",5);
    error(0,0,uVar14,uVar13);
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  lVar2 = (longdouble)CONCAT28(ret.value._8_2_,ret.value._0_8_);
  if (NAN(lVar2)) {
    uVar13 = quote_n(1,arg);
    uVar14 = quote_n(0,"not-a-number");
    uVar15 = dcgettext(0,"invalid %s argument: %s",5);
    error(0,0,uVar15,uVar14,uVar13);
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  ppuVar6 = __ctype_b_loc();
  bVar4 = *arg;
  if ((*(byte *)((long)*ppuVar6 + (ulong)bVar4 * 2 + 1) & 0x20) == 0) goto LAB_00100892;
  do {
    do {
      bVar4 = arg[1];
      arg = arg + 1;
    } while ((*(byte *)((long)*ppuVar6 + (ulong)bVar4 * 2 + 1) & 0x20) != 0);
LAB_00100892:
  } while (bVar4 == 0x2b);
  ret.width = 0;
  ret.precision = 0x7fffffff;
  pcVar7 = strchr(arg,0x2e);
  if ((pcVar7 == (char *)0x0) && (pcVar11 = strchr(arg,0x70), pcVar11 == (char *)0x0)) {
    ret.precision = 0;
  }
  sVar8 = strcspn(arg,"xX");
  if ((arg[sVar8] != '\0') || (lVar2 * (longdouble)0 != (longdouble)0)) goto LAB_001009f6;
  sVar8 = strlen(arg);
  ret.width = sVar8;
  if (pcVar7 == (char *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = strcspn(pcVar7 + 1,"eE");
    if (uVar9 < 0x80000000) {
      ret.precision = (int)uVar9;
      uVar10 = 0xffffffffffffffff;
      if (uVar9 != 0) goto LAB_00100932;
    }
    else {
LAB_00100932:
      if (pcVar7 == arg) {
        uVar10 = 1;
      }
      else {
        uVar10 = (ulong)(9 < (int)pcVar7[-1] - 0x30U);
      }
    }
    ret.width = uVar10 + sVar8;
  }
  pcVar11 = strchr(arg,0x65);
  if ((pcVar11 == (char *)0x0) && (pcVar11 = strchr(arg,0x45), pcVar11 == (char *)0x0))
  goto LAB_001009f6;
  lVar12 = __isoc23_strtol(pcVar11 + 1,0,10);
  if (lVar12 < -0x7ffffffffffffffe) {
    uVar10 = 0x8000000000000001;
LAB_001009b8:
    ret.precision = ret.precision - (int)uVar10;
    sVar8 = strlen(arg);
    ret.width = (size_t)(pcVar11 + ((ret.width - (long)arg) - sVar8));
    if ((pcVar7 == (char *)0x0) || (pcVar11 == pcVar7 + 1)) {
      ret.width = ret.width + 1;
    }
    lVar12 = -uVar10;
  }
  else {
    uVar10 = __isoc23_strtol(pcVar11 + 1,0,10);
    if ((long)uVar10 < 0) goto LAB_001009b8;
    iVar5 = ret.precision;
    if ((long)uVar10 < (long)ret.precision) {
      iVar5 = (int)uVar10;
    }
    iVar5 = ret.precision - iVar5;
    ret.precision = iVar5;
    sVar8 = strlen(arg);
    ret.width = (size_t)(pcVar11 + ((ret.width - (long)arg) - sVar8));
    if ((pcVar7 != (char *)0x0 && uVar9 != 0) && (iVar5 == 0)) {
      ret.width = ret.width + -1;
    }
    if (uVar10 <= uVar9) {
      uVar9 = uVar10;
    }
    lVar12 = uVar10 - uVar9;
  }
  ret.width = ret.width + lVar12;
LAB_001009f6:
  *(undefined8 *)&in_RDI->value = ret.value._0_8_;
  *(ulong *)((long)&in_RDI->value + 8) = CONCAT62(ret._10_6_,ret.value._8_2_);
  in_RDI->width = ret.width;
  *(ulong *)&in_RDI->precision = CONCAT44(ret._28_4_,ret.precision);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  _Bool _Var4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  long lVar8;
  size_t sVar9;
  size_t sVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  uintmax_t uVar19;
  char *unaff_RBP;
  ulong uVar20;
  ulong in_R10;
  option *unaff_R12;
  long in_FS_OFFSET;
  longdouble in_ST0;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble lVar21;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  longdouble local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_108;
  undefined4 uStack_104;
  bool local_f8;
  undefined7 uStack_f7;
  undefined2 uStack_f0;
  ulong local_e8;
  undefined2 uStack_e0;
  longdouble local_d8;
  char *s1;
  char *s2;
  char *x_str;
  char *x0_str;
  longdouble x_val;
  operand step;
  ulong local_68;
  undefined2 uStack_60;
  ulong local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  step.value._0_8_ = SUB108((longdouble)1,0);
  step.value._8_2_ = (undefined2)((unkuint10)(longdouble)1 >> 0x40);
  step.width = 1;
  step._24_8_ = step._24_8_ & 0xffffffff00000000;
  set_program_name(*argv);
  pcVar7 = setlocale(6,"");
  locale_ok = pcVar7 != (char *)0x0;
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  uVar17 = (ulong)(int)_optind;
  equal_width = false;
  separator = "\n";
  puVar14 = (char *)0x0;
  if ((int)_optind < argc) {
    unaff_R12 = long_options;
    unaff_RBP = "+f:s:w";
    pcVar7 = (char *)0x0;
    do {
      puVar14 = pcVar7;
      if ((*argv[(int)uVar17] == '-') &&
         ((cVar5 = argv[(int)uVar17][1], cVar5 == '.' || ((int)cVar5 - 0x30U < 10)))) break;
      iVar6 = getopt_long(argc,argv,"+f:s:w",long_options,0);
      if (iVar6 == -1) goto LAB_00101fb0;
      puVar14 = _optarg;
      if (iVar6 != 0x66) {
        if (iVar6 < 0x67) {
          if (iVar6 == -0x83) {
            uVar15 = proper_name_lite("Ulrich Drepper","Ulrich Drepper");
            version_etc(_stdout,&_LC3,"GNU coreutils",_Version,uVar15,0);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          goto LAB_001020fa;
        }
        if (iVar6 == 0x73) {
          separator = _optarg;
          puVar14 = pcVar7;
        }
        else {
          if (iVar6 != 0x77) goto LAB_00102139;
          equal_width = true;
          puVar14 = pcVar7;
        }
      }
      uVar17 = (ulong)(int)_optind;
      pcVar7 = puVar14;
    } while ((int)_optind < argc);
  }
LAB_00101559:
  iVar6 = argc - (int)uVar17;
  if (0 < iVar6) {
    if (iVar6 < 4) {
      if (puVar14 != (char *)0x0) {
        uVar20 = 1;
        lVar8 = 0;
        do {
          if (puVar14[lVar8] == '%') {
            unaff_RBP = (char *)(lVar8 + 1);
            if (puVar14[(long)unaff_RBP] != '%') goto LAB_001019fa;
            lVar18 = 2;
          }
          else {
            if (puVar14[lVar8] == '\0') goto LAB_0010207d;
            lVar18 = 1;
          }
          lVar8 = lVar8 + lVar18;
          uVar20 = uVar20 + 1;
        } while( true );
      }
      unaff_R12 = (option *)0x0;
      unaff_RBP = (char *)0x0;
      goto LAB_00101633;
    }
    uVar15 = quote(argv[uVar17 + 3]);
    pcVar7 = "extra operand %s";
    goto LAB_00102121;
  }
LAB_001021ad:
  uVar15 = dcgettext(0,"missing operand",5);
  error(0,0,uVar15);
LAB_00102139:
                    /* WARNING: Subroutine does not return */
  usage(1);
LAB_001019fa:
  sVar9 = strspn(puVar14 + (long)unaff_RBP,"-+#0 \'");
  sVar10 = strspn(puVar14 + (long)(unaff_RBP + sVar9),"0123456789");
  unaff_RBP = unaff_RBP + sVar9 + sVar10;
  if (puVar14[(long)unaff_RBP] == '.') {
    sVar9 = strspn(puVar14 + (long)(unaff_RBP + 1),"0123456789");
    unaff_RBP = unaff_RBP + 1 + sVar9;
  }
  unaff_R12 = (option *)(unaff_RBP + (puVar14[(long)unaff_RBP] == 'L'));
  pcVar7 = puVar14 + (long)unaff_R12;
  cVar5 = *pcVar7;
  if (cVar5 == '\0') {
    puVar14 = (undefined1 *)quote(puVar14);
    pcVar7 = "format %s ends in %%";
    goto LAB_00102094;
  }
  pcVar11 = strchr("efgaEFGA",(int)cVar5);
  lVar8 = 1;
  pcVar12 = (char *)((long)&unaff_R12->name + 1);
  if (pcVar11 == (char *)0x0) {
    puVar14 = (undefined1 *)quote(puVar14);
    uVar15 = dcgettext(0,"format %s has unknown %%%c directive",5);
    uVar20 = (ulong)(uint)(int)cVar5;
    error(1,0,uVar15,puVar14);
LAB_00102208:
    puVar14 = (undefined1 *)quote(puVar14);
    pcVar7 = "format %s has too many %% directives";
    goto LAB_00102094;
  }
  do {
    if (puVar14[(long)pcVar12] == '%') {
      if (puVar14[(long)(pcVar12 + 1)] != '%') goto LAB_00102208;
      lVar18 = 2;
    }
    else {
      if (puVar14[(long)pcVar12] == '\0') break;
      lVar18 = 1;
    }
    pcVar12 = pcVar12 + lVar18;
    lVar8 = lVar8 + 1;
  } while( true );
  pcVar12 = pcVar12 + 2;
  local_f8 = SUB81(lVar8,0);
  uStack_f7 = (undefined7)((ulong)lVar8 >> 8);
  uVar15 = xmalloc(pcVar12);
  puVar14 = (undefined1 *)__memcpy_chk(uVar15,puVar14,unaff_RBP,pcVar12);
  pcVar11 = unaff_RBP + 1;
  puVar14[(long)unaff_RBP] = 'L';
  if (pcVar12 < pcVar11) {
    pcVar12 = pcVar11;
  }
  __strcpy_chk(puVar14 + (long)pcVar11,pcVar7,(long)pcVar12 - (long)pcVar11);
  if (equal_width != false) {
    uVar15 = dcgettext(0,"format string may not be specified when printing equal width strings",5);
    error(0,0,uVar15);
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  uVar17 = (ulong)_optind;
  unaff_RBP = (char *)(uVar20 - 1);
  unaff_R12 = (option *)(lVar8 + -1);
  local_e8 = uVar20;
LAB_00101633:
  uVar16 = (uint)uVar17;
  if (iVar6 == 3) {
    pcVar7 = argv[(long)(int)uVar16 + 1];
    _Var4 = all_digits_p(pcVar7);
    if (((!_Var4) || (cVar5 = xstrtold(pcVar7,0,&step,&cl_strtold), uVar16 = _optind, cVar5 == '\0')
        ) || ((longdouble)CONCAT28(step.value._8_2_,step.value._0_8_) <= (longdouble)0)) {
      local_f8 = false;
    }
    else {
      local_f8 = (longdouble)CONCAT28(step.value._8_2_,step.value._0_8_) <= (longdouble)__LC54;
    }
    pcVar7 = argv[(int)uVar16];
    _Var4 = all_digits_p(pcVar7);
    if (((_Var4) && (_Var4 = all_digits_p(argv[(long)(int)uVar16 + 1]), _Var4)) &&
       ((local_f8 != false && (_Var4 = all_digits_p(argv[(long)(int)uVar16 + 2]), _Var4))))
    goto LAB_0010166b;
  }
  else {
    pcVar7 = argv[(int)uVar16];
    _Var4 = all_digits_p(pcVar7);
    if ((_Var4) && ((iVar6 == 1 || (_Var4 = all_digits_p(argv[(long)(int)uVar16 + 1]), _Var4)))) {
LAB_0010166b:
      if ((equal_width != true) &&
         ((puVar14 == (char *)0x0 && (sVar9 = strlen(separator), sVar9 == 1)))) {
        lVar21 = (longdouble)CONCAT28(step.value._8_2_,step.value._0_8_);
        pcVar12 = "1";
        if (iVar6 != 1) {
          pcVar12 = pcVar7;
        }
        if ((longdouble)__LC55 <= lVar21) {
          uVar19 = (long)ROUND(lVar21 - (longdouble)__LC55) ^ 0x8000000000000000;
        }
        else {
          uVar19 = (uintmax_t)ROUND(lVar21);
        }
        in_ST6 = in_ST5;
        seq_fast(pcVar12,argv[(int)(iVar6 + -1 + uVar16)],uVar19);
LAB_00101fb0:
        uVar17 = (ulong)(int)_optind;
        goto LAB_00101559;
      }
    }
  }
  _optind = uVar16 + 1;
  scan_arg(pcVar7);
  lVar8 = (long)(int)_optind;
  local_f8 = SUB81(local_68,0);
  uStack_f7 = (undefined7)(local_68 >> 8);
  uStack_f0 = uStack_60;
  if ((int)_optind < argc) {
    _optind = _optind + 1;
    scan_arg(argv[lVar8]);
    if ((int)_optind < argc) {
      lVar8 = (long)(int)_optind;
      step._28_4_ = uStack_4c;
      step.precision = uStack_50;
      step.value._0_8_ = local_68;
      step.value._8_2_ = uStack_60;
      step.width = local_58;
      if ((longdouble)CONCAT28(uStack_60,local_68) == (longdouble)0) {
        uVar15 = quote(argv[lVar8 + -1]);
        pcVar7 = "invalid Zero increment value: %s";
LAB_00102121:
        uVar13 = dcgettext(0,pcVar7,5);
        error(0,0,uVar13,uVar15);
        goto LAB_00102139;
      }
      _optind = _optind + 1;
      scan_arg(argv[lVar8]);
    }
    uVar20 = local_58;
    uVar16 = uStack_50;
    if ((uStack_50 == 0) && (step.precision == 0)) {
      lVar21 = (longdouble)0;
      in_ST5 = in_ST4;
      if ((lVar21 * (longdouble)CONCAT28(uStack_60,local_68) != lVar21) ||
         ((longdouble)CONCAT28(uStack_60,local_68) < lVar21)) goto LAB_00101d2e;
      goto LAB_00101fcb;
    }
  }
  else {
    if (uStack_50 == 0 && step.precision == 0) {
      lVar21 = (longdouble)1;
      local_f8 = SUB101(lVar21,0);
      uStack_f7 = (undefined7)((unkuint10)lVar21 >> 8);
      uStack_f0 = (undefined2)((unkuint10)lVar21 >> 0x40);
      uVar20 = 1;
LAB_00101fcb:
      uStack_e0 = uStack_60;
      local_e8 = local_68;
      if (((longdouble)CONCAT28(uStack_60,local_68) < (longdouble)0) ||
         (local_d8 = (longdouble)CONCAT28(step.value._8_2_,step.value._0_8_), in_ST5 = in_ST4,
         local_d8 <= (longdouble)0)) {
LAB_00101d2e:
        uStack_e0 = uStack_60;
        local_e8 = local_68;
        if (puVar14 == (char *)0x0) goto LAB_00101d3b;
        goto LAB_001016fa;
      }
      if ((longdouble)__LC54 < local_d8) goto LAB_001020af;
      if (equal_width != false) goto LAB_001020af;
      if (puVar14 != (char *)0x0) goto LAB_00101713;
      sVar9 = strlen(separator);
      uVar17 = 0;
      if (sVar9 != 1) goto LAB_00102038;
      iVar6 = __asprintf_chk(&s1,2,"%0.Lf");
      if (iVar6 < 0) goto LAB_001020f5;
      if ((longdouble)CONCAT28(uStack_60,local_68) * (longdouble)0 == (longdouble)0) {
        iVar6 = __asprintf_chk(&s2,2,"%0.Lf");
        if (iVar6 < 0) goto LAB_001020f5;
      }
      else {
        s2 = (char *)xstrdup(&_LC58);
      }
      if ((*s1 != '-') && (*s2 != '-')) {
        lVar21 = (longdouble)CONCAT28(step.value._8_2_,step.value._0_8_);
        if ((longdouble)__LC55 <= lVar21) {
          uVar19 = (long)ROUND(lVar21 - (longdouble)__LC55) ^ 0x8000000000000000;
        }
        else {
          uVar19 = (uintmax_t)ROUND(lVar21);
        }
        seq_fast(s1,s2,uVar19);
        goto LAB_001021ad;
      }
      free(s1);
      free(s2);
      uStack_50 = 0;
      uVar16 = 0;
      goto LAB_00101e6b;
    }
    lVar21 = (longdouble)1;
    local_f8 = SUB101(lVar21,0);
    uStack_f7 = (undefined7)((unkuint10)lVar21 >> 8);
    uStack_f0 = (undefined2)((unkuint10)lVar21 >> 0x40);
    uVar20 = 1;
    uVar16 = 0;
  }
  uStack_e0 = uStack_60;
  local_e8 = local_68;
  if (puVar14 != (char *)0x0) goto LAB_001016fa;
LAB_00101e6b:
  uStack_e0 = uStack_60;
  local_e8 = local_68;
  uVar3 = step.precision;
  if (step.precision <= (int)uVar16) {
    uVar3 = uVar16;
  }
  if ((uStack_50 != 0x7fffffff) && (uVar3 != 0x7fffffff)) {
    uVar17 = (ulong)uVar3;
    if (equal_width == false) goto LAB_00102038;
    uVar20 = uVar20 + (long)(int)(uVar3 - uVar16);
    local_58 = local_58 + (long)(int)(uVar3 - uStack_50);
    if (uStack_50 == 0) {
      if (uVar3 == 0) goto LAB_00101ece;
      local_58 = local_58 + 1;
    }
    else if (uVar3 == 0) {
      local_58 = local_58 - 1;
      goto LAB_00101ece;
    }
    uVar20 = uVar20 + (uVar16 == 0);
    goto LAB_00101ece;
  }
  puVar14 = "%Lg";
LAB_001016fa:
  local_d8 = (longdouble)CONCAT28(step.value._8_2_,step.value._0_8_);
  if ((longdouble)0 <= local_d8) goto LAB_00101713;
  bVar2 = (longdouble)CONCAT28(uStack_f0,CONCAT71(uStack_f7,local_f8)) <
          (longdouble)CONCAT28(uStack_e0,local_e8);
  do {
    if (bVar2) {
LAB_00101979:
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return 0;
    }
    local_118 = (undefined4)CONCAT71(uStack_f7,local_f8);
    uStack_114 = (undefined4)((uint7)uStack_f7 >> 0x18);
    local_128 = (longdouble)1;
    cVar5 = '\0';
    while( true ) {
      in_R10 = CONCAT44(uStack_114,local_118);
      in_ST6 = in_ST5;
      iVar6 = __printf_chk(2,puVar14);
      if (iVar6 < 0) break;
      if (cVar5 != '\0') goto LAB_0010195d;
      lVar21 = (longdouble)CONCAT28(uStack_f0,CONCAT71(uStack_f7,local_f8)) + local_128 * local_d8;
      local_108 = SUB104(lVar21,0);
      uStack_104 = (undefined4)((unkuint10)lVar21 >> 0x20);
      in_ST5 = in_ST4;
      in_ST6 = in_ST4;
      if ((longdouble)0 <= local_d8) {
        if ((longdouble)CONCAT28(uStack_e0,local_e8) < lVar21) {
          if (locale_ok != false) goto LAB_00101906;
LAB_00101769:
          iVar6 = __asprintf_chk(&x_str,2,puVar14);
          goto LAB_0010178d;
        }
      }
      else if (lVar21 < (longdouble)CONCAT28(uStack_e0,local_e8)) {
        if (locale_ok == false) goto LAB_00101769;
LAB_00101906:
        setlocale(1,"C");
        uVar20 = SUB108(lVar21,0);
        iVar6 = __asprintf_chk(&x_str,2,puVar14);
        setlocale(1,"");
LAB_0010178d:
        if (iVar6 < 0) goto LAB_001020f5;
        x_str[(long)iVar6 - (long)unaff_R12] = '\0';
        cVar5 = xstrtold(x_str + (long)unaff_RBP,0,&x_val,&cl_strtold);
        if ((cVar5 == '\0') || (in_ST6 = in_ST5, x_val != (longdouble)CONCAT28(uStack_e0,local_e8)))
        {
          free(x_str);
        }
        else {
          x0_str = (char *)0x0;
          iVar6 = __asprintf_chk(&x0_str,2,puVar14);
          if (iVar6 < 0) goto LAB_001020f5;
          x0_str[(long)iVar6 - (long)unaff_R12] = '\0';
          iVar6 = strcmp(x0_str,x_str);
          free(x0_str);
          free(x_str);
          if (iVar6 != 0) goto LAB_0010186e;
        }
LAB_0010195d:
        iVar6 = fputs_unlocked("\n",_stdout);
        if (iVar6 != -1) goto LAB_00101979;
        break;
      }
LAB_0010186e:
      iVar6 = fputs_unlocked(separator,_stdout);
      if (iVar6 == -1) break;
      local_128 = (longdouble)1 + local_128;
      local_118 = local_108;
      uStack_114 = uStack_104;
    }
    write_error();
LAB_0010207d:
    puVar14 = (undefined1 *)quote();
    pcVar7 = "format %s has no %% directive";
LAB_00102094:
    uVar15 = dcgettext(0,pcVar7,5);
    error(1,0,uVar15,puVar14);
    local_58 = in_R10;
    local_d8 = in_ST0;
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
LAB_001020af:
    if (puVar14 == (char *)0x0) goto LAB_00101d3b;
LAB_00101713:
    bVar2 = (longdouble)CONCAT28(uStack_e0,local_e8) <
            (longdouble)CONCAT28(uStack_f0,CONCAT71(uStack_f7,local_f8));
  } while( true );
LAB_001020f5:
  iVar6 = xalloc_die();
LAB_001020fa:
  if (iVar6 == -0x82) {
                    /* WARNING: Subroutine does not return */
    usage(0);
  }
  goto LAB_00102139;
LAB_00101d3b:
  uVar17 = 0;
  if (equal_width == false) {
LAB_00102038:
    uVar20 = uVar17;
    __sprintf_chk(format_buf_0,2,0x1c,"%%.%dLf");
  }
  else {
LAB_00101ece:
    puVar14 = "%Lg";
    if (uVar20 < local_58) {
      uVar20 = local_58;
    }
    if (0x7fffffff < uVar20) goto LAB_001016fa;
    __sprintf_chk(format_buf_0,2,0x1c,"%%0%d.%dLf");
  }
  puVar14 = format_buf_0;
  goto LAB_001016fa;
}


