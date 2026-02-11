
undefined1  [16] all_digits_p(char *param_1)

{
  undefined8 in_RAX;
  size_t sVar1;
  size_t sVar2;
  undefined1 auVar3 [16];
  
  if ((int)*param_1 - 0x30U < 10) {
    sVar1 = strlen(param_1);
    sVar2 = strspn(param_1,"0123456789");
    auVar3._1_7_ = 0;
    auVar3[0] = sVar2 == sVar1;
    auVar3._8_8_ = in_RAX;
    return auVar3;
  }
  return ZEXT416((int)*param_1 - 0x30U) << 0x40;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  undefined1 *puVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  long extraout_RDX;
  long lVar15;
  char *pcVar16;
  undefined1 *__dest;
  ulong uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  int *piStack_20a0;
  char *pcStack_2088;
  ulong uStack_2058;
  undefined1 auStack_2050 [8192];
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
      pcVar13 = pcVar5;
      pcVar5 = pcVar13 + 1;
    } while (pcVar13[1] == '0');
    if ((pcVar16 == pcVar5) || (pcVar16 = pcVar13, pcVar13[1] != '\0')) {
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
  pcVar16 = (char *)__memcpy_chk((long)pcVar5 - sVar8,pcVar16,sVar8,
                                 ((uVar14 + sVar8) - uVar17) + uVar10);
  __dest = auStack_2050;
LAB_001001ef:
  sVar8 = (long)pcVar5 - (long)pcVar16;
  pcVar13 = pcVar16;
  if (bVar18) goto LAB_00100262;
  if (__n == sVar8) goto LAB_0010034d;
  iVar2 = (uint)((long)__n < (long)sVar8) - (uint)(__n != sVar8 && (long)sVar8 <= (long)__n);
  do {
    pcVar13 = pcVar16;
    if (iVar2 < 1) {
LAB_00100262:
      do {
        pcVar12 = acStack_50 + -(long)__dest;
        if ((long)pcVar5 - (long)pcVar13 < (long)pcVar12) {
          puVar11 = (undefined1 *)mempcpy(__dest,pcVar13,(long)pcVar5 - (long)pcVar13);
          __dest = puVar11 + 1;
          *puVar11 = *separator;
          lVar15 = extraout_RDX;
          if (pcStack_2088 == pcVar16) {
            pcVar13 = (char *)xpalloc(0,&uStack_2058,1,0xffffffffffffffff,1);
            pcVar5 = pcVar13 + uStack_2058;
            pcVar16 = (char *)memcpy(pcVar5 + -sVar8,pcStack_2088,sVar8);
            free(pcStack_2088);
            pcStack_2088 = pcVar13;
          }
          goto joined_r0x001002a4;
        }
        memcpy(__dest,pcVar13,(size_t)pcVar12);
        lVar15 = full_write(1,auStack_2050,0x2000);
        __dest = auStack_2050;
        pcVar13 = pcVar13 + (long)pcVar12;
      } while (lVar15 == 0x2000);
    }
    else {
      pcVar5 = __dest + -(long)auStack_2050;
      if (pcVar5 == (char *)0x0) {
LAB_0010041d:
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      __dest[-1] = 10;
      pcVar13 = (char *)full_write(1,auStack_2050,pcVar5);
      if (pcVar13 == pcVar5) goto LAB_0010041d;
    }
    write_error();
LAB_0010034d:
    iVar2 = memcmp(pcVar16,piStack_20a0,__n);
  } while( true );
joined_r0x001002a4:
  pcVar13 = pcVar5;
  if (lVar15 == 0) goto LAB_001001ef;
  do {
    pcVar12 = pcVar13 + -1;
    if (pcVar13[-1] < '9') {
      *pcVar12 = pcVar13[-1] + '\x01';
      goto LAB_001002d2;
    }
    *pcVar12 = '0';
    pcVar13 = pcVar12;
  } while (pcVar16 < pcVar12);
  pcVar16[-1] = '1';
  pcVar16 = pcVar16 + -1;
LAB_001002d2:
  lVar15 = lVar15 + -1;
  goto joined_r0x001002a4;
}



void seq_fast(char *param_1,int *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  size_t sVar5;
  size_t __n;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  undefined1 *puVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  long lVar13;
  undefined1 *__dest;
  ulong uVar14;
  long in_FS_OFFSET;
  int *local_2098;
  char *local_2080;
  ulong local_2050;
  undefined1 local_2048 [8192];
  char local_48 [8];
  undefined8 local_40;
  
  local_40 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  pcVar3 = param_1;
  if (*param_1 == '0') {
    do {
      pcVar8 = pcVar3;
      pcVar3 = pcVar8 + 1;
    } while (pcVar8[1] == '0');
    if ((param_1 == pcVar3) || (param_1 = pcVar8, pcVar8[1] != '\0')) {
      param_1 = pcVar3;
    }
  }
  piVar4 = param_2;
  local_2098 = param_2;
  if ((char)*param_2 == '0') {
    do {
      local_2098 = piVar4;
      piVar4 = (int *)((long)local_2098 + 1);
    } while (*(char *)((long)local_2098 + 1) == '0');
    if ((*(char *)((long)local_2098 + 1) != '\0') || (param_2 == piVar4)) {
      local_2098 = piVar4;
    }
  }
  sVar5 = strlen(param_1);
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
  local_2050 = uVar14;
  local_2080 = (char *)xmalloc(uVar14);
  pcVar3 = local_2080 + local_2050;
  uVar6 = local_2050;
  if (local_2050 <= uVar14) {
    uVar6 = uVar14;
  }
  uVar12 = uVar6 - local_2050;
  if (uVar14 < uVar12) {
    uVar14 = uVar12;
  }
  uVar6 = (local_2050 - sVar5) - uVar6;
  uVar7 = uVar6 + uVar14;
  if (CARRY8(uVar6,uVar14)) {
    uVar7 = uVar14;
  }
  pcVar8 = (char *)__memcpy_chk((long)pcVar3 - sVar5,param_1,sVar5,
                                ((uVar12 + sVar5) - uVar14) + uVar7);
  __dest = local_2048;
LAB_001001ef:
  sVar5 = (long)pcVar3 - (long)pcVar8;
  pcVar11 = pcVar8;
  if (bVar1) goto LAB_00100262;
  if (__n == sVar5) goto LAB_0010034d;
  iVar2 = (uint)((long)__n < (long)sVar5) - (uint)(__n != sVar5 && (long)sVar5 <= (long)__n);
  do {
    pcVar11 = pcVar8;
    if (iVar2 < 1) {
LAB_00100262:
      do {
        pcVar10 = local_48 + -(long)__dest;
        if ((long)pcVar3 - (long)pcVar11 < (long)pcVar10) {
          puVar9 = (undefined1 *)mempcpy(__dest,pcVar11,(long)pcVar3 - (long)pcVar11);
          __dest = puVar9 + 1;
          *puVar9 = *separator;
          if (local_2080 == pcVar8) {
            pcVar11 = (char *)xpalloc(0,&local_2050,1,0xffffffffffffffff,1);
            pcVar3 = pcVar11 + local_2050;
            pcVar8 = (char *)memcpy(pcVar3 + -sVar5,local_2080,sVar5);
            free(local_2080);
            local_2080 = pcVar11;
          }
          pcVar11 = pcVar3;
          lVar13 = param_3;
          if (param_3 != 0) goto LAB_001002c0;
          goto LAB_001001ef;
        }
        memcpy(__dest,pcVar11,(size_t)pcVar10);
        lVar13 = full_write(1,local_2048,0x2000);
        __dest = local_2048;
        pcVar11 = pcVar11 + (long)pcVar10;
      } while (lVar13 == 0x2000);
    }
    else {
      pcVar3 = __dest + -(long)local_2048;
      if (pcVar3 == (char *)0x0) {
LAB_0010041d:
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      __dest[-1] = 10;
      pcVar11 = (char *)full_write(1,local_2048,pcVar3);
      if (pcVar11 == pcVar3) goto LAB_0010041d;
    }
    write_error();
LAB_0010034d:
    iVar2 = memcmp(pcVar8,local_2098,__n);
  } while( true );
LAB_001002c0:
  do {
    pcVar10 = pcVar11 + -1;
    if (pcVar11[-1] < '9') {
      *pcVar10 = pcVar11[-1] + '\x01';
    }
    else {
      *pcVar10 = '0';
      pcVar11 = pcVar10;
      if (pcVar8 < pcVar10) goto LAB_001002c0;
      pcVar8[-1] = '1';
      pcVar8 = pcVar8 + -1;
    }
    lVar13 = lVar13 + -1;
    pcVar11 = pcVar3;
  } while (lVar13 != 0);
  goto LAB_001001ef;
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
    iVar2 = strcmp("seq",pcVar4);
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
  exit(param_1);
}



undefined8 * scan_arg(undefined8 *param_1,byte *param_2)

{
  longdouble lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  ushort **ppuVar5;
  byte *pbVar6;
  size_t sVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined2 uStack_60;
  undefined6 uStack_5e;
  byte *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = xstrtold(param_2,0,&local_68,&cl_strtold);
  if (cVar2 == '\0') {
    uVar13 = quote(param_2);
    uVar14 = dcgettext(0,"invalid floating point argument: %s",5);
    error(0,0,uVar14,uVar13);
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  lVar1 = (longdouble)CONCAT28(uStack_60,local_68);
  if (NAN(lVar1)) {
    uVar13 = quote_n(1,param_2);
    uVar14 = quote_n(0,"not-a-number");
    uVar15 = dcgettext(0,"invalid %s argument: %s",5);
    error(0,0,uVar15,uVar14,uVar13);
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  ppuVar5 = __ctype_b_loc();
  bVar3 = *param_2;
  if ((*(byte *)((long)*ppuVar5 + (ulong)bVar3 * 2 + 1) & 0x20) == 0) goto LAB_00100892;
  do {
    do {
      bVar3 = param_2[1];
      param_2 = param_2 + 1;
    } while ((*(byte *)((long)*ppuVar5 + (ulong)bVar3 * 2 + 1) & 0x20) != 0);
LAB_00100892:
  } while (bVar3 == 0x2b);
  local_58 = (byte *)0x0;
  iStack_50 = 0x7fffffff;
  pbVar6 = (byte *)strchr((char *)param_2,0x2e);
  if ((pbVar6 == (byte *)0x0) && (pcVar12 = strchr((char *)param_2,0x70), pcVar12 == (char *)0x0)) {
    iStack_50 = 0;
  }
  sVar7 = strcspn((char *)param_2,"xX");
  if ((param_2[sVar7] != 0) || (lVar1 * (longdouble)0 != (longdouble)0)) goto LAB_001009f6;
  pbVar8 = (byte *)strlen((char *)param_2);
  local_58 = pbVar8;
  if (pbVar6 == (byte *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = strcspn((char *)(pbVar6 + 1),"eE");
    if (uVar9 < 0x80000000) {
      iStack_50 = (int)uVar9;
      uVar10 = 0xffffffffffffffff;
      if (uVar9 != 0) goto LAB_00100932;
    }
    else {
LAB_00100932:
      if (pbVar6 == param_2) {
        uVar10 = 1;
      }
      else {
        uVar10 = (ulong)(9 < (int)(char)pbVar6[-1] - 0x30U);
      }
    }
    local_58 = pbVar8 + uVar10;
  }
  pbVar8 = (byte *)strchr((char *)param_2,0x65);
  if ((pbVar8 == (byte *)0x0) &&
     (pbVar8 = (byte *)strchr((char *)param_2,0x45), pbVar8 == (byte *)0x0)) goto LAB_001009f6;
  lVar11 = __isoc23_strtol(pbVar8 + 1,0,10);
  if (lVar11 < -0x7ffffffffffffffe) {
    uVar10 = 0x8000000000000001;
LAB_001009b8:
    iStack_50 = iStack_50 - (int)uVar10;
    sVar7 = strlen((char *)param_2);
    local_58 = pbVar8 + (long)(local_58 + (-sVar7 - (long)param_2));
    if ((pbVar6 == (byte *)0x0) || (pbVar8 == pbVar6 + 1)) {
      local_58 = local_58 + 1;
    }
    lVar11 = -uVar10;
  }
  else {
    uVar10 = __isoc23_strtol(pbVar8 + 1,0,10);
    if ((long)uVar10 < 0) goto LAB_001009b8;
    iVar4 = iStack_50;
    if ((long)uVar10 < (long)iStack_50) {
      iVar4 = (int)uVar10;
    }
    iVar4 = iStack_50 - iVar4;
    iStack_50 = iVar4;
    sVar7 = strlen((char *)param_2);
    local_58 = pbVar8 + (long)(local_58 + (-sVar7 - (long)param_2));
    if ((pbVar6 != (byte *)0x0 && uVar9 != 0) && (iVar4 == 0)) {
      local_58 = local_58 + -1;
    }
    if (uVar10 <= uVar9) {
      uVar9 = uVar10;
    }
    lVar11 = uVar10 - uVar9;
  }
  local_58 = local_58 + lVar11;
LAB_001009f6:
  *param_1 = local_68;
  param_1[1] = CONCAT62(uStack_5e,uStack_60);
  param_1[2] = local_58;
  param_1[3] = CONCAT44(uStack_4c,iStack_50);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(int param_1,undefined8 *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined2 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  size_t sVar9;
  size_t sVar10;
  char *pcVar11;
  char *pcVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  char *unaff_RBP;
  ulong uVar19;
  ulong in_R10;
  undefined1 *unaff_R12;
  undefined *puVar20;
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
  char *local_b8;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  longdouble local_98;
  ulong local_88;
  undefined2 uStack_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  undefined2 uStack_60;
  ulong local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = SUB108((longdouble)1,0);
  uStack_80 = (undefined2)((unkuint10)(longdouble)1 >> 0x40);
  local_78 = 1;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  set_program_name(*param_2);
  pcVar7 = setlocale(6,"");
  locale_ok = pcVar7 != (char *)0x0;
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  uVar17 = (ulong)(int)_optind;
  equal_width = '\0';
  separator = "\n";
  puVar15 = (char *)0x0;
  if ((int)_optind < param_1) {
    unaff_R12 = long_options;
    unaff_RBP = "+f:s:w";
    pcVar7 = (char *)0x0;
    do {
      puVar15 = pcVar7;
      if ((*(char *)param_2[(int)uVar17] == '-') &&
         ((cVar4 = ((char *)param_2[(int)uVar17])[1], cVar4 == '.' || ((int)cVar4 - 0x30U < 10))))
      break;
      iVar5 = getopt_long(param_1,param_2,"+f:s:w",long_options,0);
      if (iVar5 == -1) goto LAB_00101fb0;
      puVar15 = _optarg;
      if (iVar5 != 0x66) {
        if (iVar5 < 0x67) {
          if (iVar5 == -0x83) {
            uVar16 = proper_name_lite("Ulrich Drepper","Ulrich Drepper");
            version_etc(_stdout,&_LC3,"GNU coreutils",_Version,uVar16,0);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          goto LAB_001020fa;
        }
        if (iVar5 == 0x73) {
          separator = _optarg;
          puVar15 = pcVar7;
        }
        else {
          if (iVar5 != 0x77) goto LAB_00102139;
          equal_width = '\x01';
          puVar15 = pcVar7;
        }
      }
      uVar17 = (ulong)(int)_optind;
      pcVar7 = puVar15;
    } while ((int)_optind < param_1);
  }
LAB_00101559:
  iVar5 = param_1 - (int)uVar17;
  if (0 < iVar5) {
    if (iVar5 < 4) {
      if (puVar15 != (char *)0x0) {
        uVar19 = 1;
        lVar8 = 0;
        do {
          if (puVar15[lVar8] == '%') {
            unaff_RBP = (char *)(lVar8 + 1);
            if (puVar15[(long)unaff_RBP] != '%') goto LAB_001019fa;
            lVar18 = 2;
          }
          else {
            if (puVar15[lVar8] == '\0') goto LAB_0010207d;
            lVar18 = 1;
          }
          lVar8 = lVar8 + lVar18;
          uVar19 = uVar19 + 1;
        } while( true );
      }
      unaff_R12 = (char *)0x0;
      unaff_RBP = (char *)0x0;
      goto LAB_00101633;
    }
    uVar16 = quote(param_2[uVar17 + 3]);
    pcVar7 = "extra operand %s";
    goto LAB_00102121;
  }
LAB_001021ad:
  uVar16 = dcgettext(0,"missing operand",5);
  error(0,0,uVar16);
LAB_00102139:
                    /* WARNING: Subroutine does not return */
  usage(1);
LAB_001019fa:
  sVar9 = strspn(puVar15 + (long)unaff_RBP,"-+#0 \'");
  sVar10 = strspn(puVar15 + (long)(unaff_RBP + sVar9),"0123456789");
  unaff_RBP = unaff_RBP + sVar9 + sVar10;
  if (puVar15[(long)unaff_RBP] == '.') {
    sVar9 = strspn(puVar15 + (long)(unaff_RBP + 1),"0123456789");
    unaff_RBP = unaff_RBP + 1 + sVar9;
  }
  unaff_R12 = unaff_RBP + (puVar15[(long)unaff_RBP] == 'L');
  pcVar7 = puVar15 + (long)unaff_R12;
  cVar4 = *pcVar7;
  if (cVar4 == '\0') {
    puVar15 = (undefined1 *)quote(puVar15);
    pcVar7 = "format %s ends in %%";
    goto LAB_00102094;
  }
  pcVar11 = strchr("efgaEFGA",(int)cVar4);
  lVar8 = 1;
  pcVar12 = unaff_R12 + 1;
  if (pcVar11 == (char *)0x0) {
    puVar15 = (undefined1 *)quote(puVar15);
    uVar16 = dcgettext(0,"format %s has unknown %%%c directive",5);
    uVar19 = (ulong)(uint)(int)cVar4;
    error(1,0,uVar16,puVar15);
LAB_00102208:
    puVar15 = (undefined1 *)quote(puVar15);
    pcVar7 = "format %s has too many %% directives";
    goto LAB_00102094;
  }
  do {
    if (puVar15[(long)pcVar12] == '%') {
      if (puVar15[(long)(pcVar12 + 1)] != '%') goto LAB_00102208;
      lVar18 = 2;
    }
    else {
      if (puVar15[(long)pcVar12] == '\0') break;
      lVar18 = 1;
    }
    pcVar12 = pcVar12 + lVar18;
    lVar8 = lVar8 + 1;
  } while( true );
  pcVar12 = pcVar12 + 2;
  local_f8 = SUB81(lVar8,0);
  uStack_f7 = (undefined7)((ulong)lVar8 >> 8);
  uVar16 = xmalloc(pcVar12);
  puVar15 = (undefined1 *)__memcpy_chk(uVar16,puVar15,unaff_RBP,pcVar12);
  pcVar11 = unaff_RBP + 1;
  puVar15[(long)unaff_RBP] = 'L';
  if (pcVar12 < pcVar11) {
    pcVar12 = pcVar11;
  }
  __strcpy_chk(puVar15 + (long)pcVar11,pcVar7,(long)pcVar12 - (long)pcVar11);
  if (equal_width != '\0') {
    uVar16 = dcgettext(0,"format string may not be specified when printing equal width strings",5);
    error(0,0,uVar16);
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  uVar17 = (ulong)_optind;
  unaff_RBP = (char *)(uVar19 - 1);
  unaff_R12 = (undefined1 *)(lVar8 + -1);
  local_e8 = uVar19;
LAB_00101633:
  uVar6 = (uint)uVar17;
  if (iVar5 == 3) {
    uVar16 = param_2[(long)(int)uVar6 + 1];
    cVar4 = all_digits_p();
    if (((cVar4 == '\0') ||
        (cVar4 = xstrtold(uVar16,0,&local_88,&cl_strtold), uVar6 = _optind, cVar4 == '\0')) ||
       ((longdouble)CONCAT28(uStack_80,local_88) <= (longdouble)0)) {
      local_f8 = false;
    }
    else {
      local_f8 = (longdouble)CONCAT28(uStack_80,local_88) <= (longdouble)__LC54;
    }
    puVar20 = (undefined *)param_2[(int)uVar6];
    cVar4 = all_digits_p(puVar20);
    if (((cVar4 != '\0') && (cVar4 = all_digits_p(param_2[(long)(int)uVar6 + 1]), cVar4 != '\0')) &&
       (local_f8 != false)) {
      cVar4 = all_digits_p(param_2[(long)(int)uVar6 + 2]);
joined_r0x00101c02:
      if (cVar4 != '\0') goto LAB_0010166b;
    }
  }
  else {
    puVar20 = (undefined *)param_2[(int)uVar6];
    cVar4 = all_digits_p(puVar20);
    if (cVar4 != '\0') {
      if (iVar5 != 1) {
        cVar4 = all_digits_p(param_2[(long)(int)uVar6 + 1]);
        goto joined_r0x00101c02;
      }
LAB_0010166b:
      if (((equal_width != '\x01') && (puVar15 == (char *)0x0)) &&
         (sVar9 = strlen(separator), sVar9 == 1)) {
        lVar21 = (longdouble)CONCAT28(uStack_80,local_88);
        puVar13 = &_LC38;
        if (iVar5 != 1) {
          puVar13 = puVar20;
        }
        if ((longdouble)__LC55 <= lVar21) {
          uVar17 = (long)ROUND(lVar21 - (longdouble)__LC55) ^ 0x8000000000000000;
        }
        else {
          uVar17 = (ulong)ROUND(lVar21);
        }
        in_ST6 = in_ST5;
        seq_fast(puVar13,param_2[(int)(iVar5 + -1 + uVar6)],uVar17);
LAB_00101fb0:
        uVar17 = (ulong)(int)_optind;
        goto LAB_00101559;
      }
    }
  }
  _optind = uVar6 + 1;
  scan_arg(&local_68,puVar20);
  uVar6 = uStack_50;
  uVar19 = local_58;
  uVar3 = uStack_60;
  uVar17 = local_68;
  lVar8 = (long)(int)_optind;
  local_f8 = SUB81(local_68,0);
  uStack_f7 = (undefined7)(local_68 >> 8);
  uStack_f0 = uStack_60;
  if ((int)_optind < param_1) {
    _optind = _optind + 1;
    scan_arg(&local_68,param_2[lVar8]);
    local_e8 = local_68;
    uStack_e0 = uStack_60;
    if ((int)_optind < param_1) {
      lVar8 = (long)(int)_optind;
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_88 = local_68;
      uStack_80 = uStack_60;
      local_78 = local_58;
      if ((longdouble)CONCAT28(uStack_60,local_68) == (longdouble)0) {
        uVar16 = quote(param_2[lVar8 + -1]);
        pcVar7 = "invalid Zero increment value: %s";
LAB_00102121:
        uVar14 = dcgettext(0,pcVar7,5);
        error(0,0,uVar14,uVar16);
        goto LAB_00102139;
      }
      _optind = _optind + 1;
      scan_arg(&local_68,param_2[lVar8]);
      local_e8 = local_68;
      uStack_e0 = uStack_60;
    }
    in_R10 = local_58;
    if ((uVar6 == 0) && (uStack_50 == 0 && (uint)uStack_70 == 0)) {
      lVar21 = (longdouble)0;
      in_ST5 = in_ST4;
      if ((lVar21 * (longdouble)CONCAT28(uVar3,uVar17) != lVar21) ||
         ((longdouble)CONCAT28(uVar3,uVar17) < lVar21)) goto LAB_00101d2e;
      goto LAB_00101fcb;
    }
  }
  else {
    local_e8 = local_68;
    uStack_e0 = uStack_60;
    in_R10 = local_58;
    if (uStack_50 == 0 && (uint)uStack_70 == 0) {
      lVar21 = (longdouble)1;
      uVar19 = 1;
      local_f8 = SUB101(lVar21,0);
      uStack_f7 = (undefined7)((unkuint10)lVar21 >> 8);
      uStack_f0 = (undefined2)((unkuint10)lVar21 >> 0x40);
LAB_00101fcb:
      if (((longdouble)CONCAT28(uStack_e0,local_e8) < (longdouble)0) ||
         (local_d8 = (longdouble)CONCAT28(uStack_80,local_88), in_ST5 = in_ST4,
         local_d8 <= (longdouble)0)) {
LAB_00101d2e:
        if (puVar15 == (char *)0x0) goto LAB_00101d3b;
        goto LAB_001016fa;
      }
      if ((longdouble)__LC54 < local_d8) goto LAB_001020af;
      if (equal_width != '\0') goto LAB_001020af;
      if (puVar15 != (char *)0x0) goto LAB_00101713;
      sVar9 = strlen(separator);
      uVar17 = 0;
      if (sVar9 != 1) goto LAB_00102038;
      iVar5 = __asprintf_chk(&local_b8,2,"%0.Lf");
      if (iVar5 < 0) goto LAB_001020f5;
      if ((longdouble)CONCAT28(uStack_e0,local_e8) * (longdouble)0 == (longdouble)0) {
        iVar5 = __asprintf_chk(&local_b0,2,"%0.Lf");
        if (iVar5 < 0) goto LAB_001020f5;
      }
      else {
        local_b0 = (char *)xstrdup(&_LC58);
      }
      if ((*local_b8 != '-') && (*local_b0 != '-')) {
        lVar21 = (longdouble)CONCAT28(uStack_80,local_88);
        if ((longdouble)__LC55 <= lVar21) {
          uVar17 = (long)ROUND(lVar21 - (longdouble)__LC55) ^ 0x8000000000000000;
        }
        else {
          uVar17 = (ulong)ROUND(lVar21);
        }
        seq_fast(local_b8,local_b0,uVar17);
        goto LAB_001021ad;
      }
      free(local_b8);
      free(local_b0);
      uStack_50 = 0;
      uVar6 = 0;
      goto LAB_00101e6b;
    }
    lVar21 = (longdouble)1;
    uVar6 = 0;
    local_f8 = SUB101(lVar21,0);
    uStack_f7 = (undefined7)((unkuint10)lVar21 >> 8);
    uStack_f0 = (undefined2)((unkuint10)lVar21 >> 0x40);
    uVar19 = 1;
  }
  if (puVar15 != (char *)0x0) goto LAB_001016fa;
LAB_00101e6b:
  uVar2 = (uint)uStack_70;
  if ((int)(uint)uStack_70 <= (int)uVar6) {
    uVar2 = uVar6;
  }
  if ((uStack_50 != 0x7fffffff) && (uVar2 != 0x7fffffff)) {
    uVar17 = (ulong)uVar2;
    if (equal_width == '\0') goto LAB_00102038;
    uVar19 = uVar19 + (long)(int)(uVar2 - uVar6);
    in_R10 = in_R10 + (long)(int)(uVar2 - uStack_50);
    if (uStack_50 == 0) {
      if (uVar2 == 0) goto LAB_00101ece;
      in_R10 = in_R10 + 1;
    }
    else if (uVar2 == 0) {
      in_R10 = in_R10 - 1;
      goto LAB_00101ece;
    }
    uVar19 = uVar19 + (uVar6 == 0);
    goto LAB_00101ece;
  }
  puVar15 = "%Lg";
LAB_001016fa:
  local_d8 = (longdouble)CONCAT28(uStack_80,local_88);
  if ((longdouble)0 <= local_d8) goto LAB_00101713;
  bVar1 = (longdouble)CONCAT28(uStack_f0,CONCAT71(uStack_f7,local_f8)) <
          (longdouble)CONCAT28(uStack_e0,local_e8);
  do {
    if (bVar1) {
LAB_00101979:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_118 = (undefined4)CONCAT71(uStack_f7,local_f8);
    uStack_114 = (undefined4)((uint7)uStack_f7 >> 0x18);
    local_128 = (longdouble)1;
    cVar4 = '\0';
    while( true ) {
      in_R10 = CONCAT44(uStack_114,local_118);
      in_ST6 = in_ST5;
      iVar5 = __printf_chk(2,puVar15);
      if (iVar5 < 0) break;
      if (cVar4 != '\0') goto LAB_0010195d;
      lVar21 = (longdouble)CONCAT28(uStack_f0,CONCAT71(uStack_f7,local_f8)) + local_128 * local_d8;
      local_108 = SUB104(lVar21,0);
      uStack_104 = (undefined4)((unkuint10)lVar21 >> 0x20);
      in_ST5 = in_ST4;
      in_ST6 = in_ST4;
      if ((longdouble)0 <= local_d8) {
        if ((longdouble)CONCAT28(uStack_e0,local_e8) < lVar21) {
          if (locale_ok == '\0') goto LAB_00101769;
LAB_00101906:
          setlocale(1,"C");
          uVar19 = SUB108(lVar21,0);
          iVar5 = __asprintf_chk(&local_a8,2,puVar15);
          setlocale(1,"");
          goto LAB_0010178d;
        }
      }
      else if (lVar21 < (longdouble)CONCAT28(uStack_e0,local_e8)) {
        if (locale_ok != '\0') goto LAB_00101906;
LAB_00101769:
        iVar5 = __asprintf_chk(&local_a8,2,puVar15);
LAB_0010178d:
        if (iVar5 < 0) goto LAB_001020f5;
        local_a8[(long)iVar5 - (long)unaff_R12] = '\0';
        cVar4 = xstrtold(local_a8 + (long)unaff_RBP,0,&local_98,&cl_strtold);
        if ((cVar4 == '\0') ||
           (in_ST6 = in_ST5, local_98 != (longdouble)CONCAT28(uStack_e0,local_e8))) {
          free(local_a8);
        }
        else {
          local_a0 = (char *)0x0;
          iVar5 = __asprintf_chk(&local_a0,2,puVar15);
          if (iVar5 < 0) goto LAB_001020f5;
          local_a0[(long)iVar5 - (long)unaff_R12] = '\0';
          iVar5 = strcmp(local_a0,local_a8);
          free(local_a0);
          free(local_a8);
          if (iVar5 != 0) goto LAB_0010186e;
        }
LAB_0010195d:
        iVar5 = fputs_unlocked("\n",_stdout);
        if (iVar5 != -1) goto LAB_00101979;
        break;
      }
LAB_0010186e:
      iVar5 = fputs_unlocked(separator,_stdout);
      if (iVar5 == -1) break;
      local_128 = (longdouble)1 + local_128;
      local_118 = local_108;
      uStack_114 = uStack_104;
    }
    write_error();
LAB_0010207d:
    puVar15 = (undefined1 *)quote();
    pcVar7 = "format %s has no %% directive";
LAB_00102094:
    uVar16 = dcgettext(0,pcVar7,5);
    error(1,0,uVar16,puVar15);
    local_d8 = in_ST0;
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
LAB_001020af:
    if (puVar15 == (char *)0x0) goto LAB_00101d3b;
LAB_00101713:
    bVar1 = (longdouble)CONCAT28(uStack_e0,local_e8) <
            (longdouble)CONCAT28(uStack_f0,CONCAT71(uStack_f7,local_f8));
  } while( true );
LAB_001020f5:
  iVar5 = xalloc_die();
LAB_001020fa:
  if (iVar5 == -0x82) {
                    /* WARNING: Subroutine does not return */
    usage(0);
  }
  goto LAB_00102139;
LAB_00101d3b:
  uVar17 = 0;
  if (equal_width == '\0') {
LAB_00102038:
    uVar19 = uVar17;
    __sprintf_chk(format_buf_0,2,0x1c,"%%.%dLf");
  }
  else {
LAB_00101ece:
    puVar15 = "%Lg";
    if (uVar19 < in_R10) {
      uVar19 = in_R10;
    }
    if (0x7fffffff < uVar19) goto LAB_001016fa;
    __sprintf_chk(format_buf_0,2,0x1c,"%%0%d.%dLf");
  }
  puVar15 = format_buf_0;
  goto LAB_001016fa;
}


