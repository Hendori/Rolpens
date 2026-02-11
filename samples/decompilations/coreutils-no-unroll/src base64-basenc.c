
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_error(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 in_R8;
  undefined8 in_R9;
  
  puVar3 = (uint *)__errno_location();
  uVar1 = *puVar3;
  uVar7 = (ulong)uVar1;
  fflush_unlocked(_stdout);
  fpurge(_stdout);
  clearerr_unlocked(_stdout);
  uVar4 = dcgettext(0,"write error",5);
  pcVar5 = (char *)(ulong)uVar1;
  error(1,pcVar5,uVar4);
  iVar2 = rpl_fclose();
  if (iVar2 != 0) {
    if ((*pcVar5 == '-') && (pcVar5[1] == '\0')) {
      pcVar5 = (char *)dcgettext(0,"closing standard input",5);
      piVar6 = __errno_location();
      error(1,*piVar6,pcVar5);
    }
    uVar4 = quotearg_n_style_colon(0,3,pcVar5);
    piVar6 = __errno_location();
    error(1,*piVar6,&_LC2,uVar4,in_R8,in_R9,uVar7);
  }
                    /* WARNING: Subroutine does not return */
  exit(0);
}



void finish_and_exit(undefined8 param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  iVar1 = rpl_fclose();
  if (iVar1 != 0) {
    if ((*param_2 == '-') && (param_2[1] == '\0')) {
      param_2 = (char *)dcgettext(0,"closing standard input",5);
      piVar2 = __errno_location();
      error(1,*piVar2,param_2);
    }
    uVar3 = quotearg_n_style_colon(0,3,param_2);
    piVar2 = __errno_location();
    error(1,*piVar2,&_LC2,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
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
  
  uVar4 = _program_name;
  ppuVar7 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar4);
    goto LAB_0010012a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]\n",5);
  __printf_chk(2,uVar3,uVar4);
  uVar4 = dcgettext(0,"Base%d encode or decode FILE, or standard input, to standard output.\n",5);
  __printf_chk(2,uVar4,0x40);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -d, --decode          decode data\n  -i, --ignore-garbage  when decoding, ignore non-alphabet characters\n  -w, --wrap=COLS       wrap encoded lines after COLS character (default 76).\n                          Use 0 to disable line wrapping\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  uVar4 = dcgettext(0,
                    "\nThe data are encoded as described for the %s alphabet in RFC 4648.\nWhen decoding, the input may contain newlines in addition to the bytes of\nthe formal %s alphabet.  Use --ignore-garbage to attempt to recover\nfrom any other non-alphabet bytes in the encoded stream.\n"
                    ,5);
  __printf_chk(2,uVar4,"base64","base64");
  pcVar5 = "[";
  local_a8 = &_LC3;
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
    iVar2 = strcmp("base64",pcVar5);
    if (iVar2 == 0) break;
    pcVar5 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar5 != (char *)0x0);
  pcVar5 = *(char **)((long)ppuVar7 + 8);
  if (pcVar5 == (char *)0x0) {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar5 = "base64";
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010037d;
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/","base64");
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_0010037d:
      iVar2 = strncmp(pcVar6,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar6 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar6,pFVar1);
      }
    }
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = "";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/","base64");
    if (pcVar5 == "base64") {
      pcVar6 = " invocation";
    }
  }
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar4,pcVar5,pcVar6);
LAB_0010012a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void main(int param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  bool bVar4;
  FILE *__stream;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  FILE *pFVar9;
  uint *__ptr;
  long lVar10;
  long lVar11;
  size_t sVar12;
  size_t *psVar13;
  uint *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int *piVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  uint *puVar23;
  uint *puVar24;
  long in_FS_OFFSET;
  void *local_90;
  uint *local_88;
  size_t *local_80;
  uint *local_78;
  char *local_60;
  size_t local_58;
  uint local_50 [2];
  int local_48;
  undefined4 uStack_44;
  char *local_40;
  
  bVar4 = false;
  local_40 = *(char **)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_90 = (void *)((ulong)local_90 & 0xffffffffffffff00);
  uVar21 = 0x4c;
  while( true ) {
    while( true ) {
      while( true ) {
        iVar6 = getopt_long(param_1,param_2,&_LC36,long_options,0);
        if (iVar6 == -1) goto LAB_00100c18;
        if (iVar6 != 100) break;
        bVar4 = true;
      }
      if (iVar6 < 0x65) {
        if (iVar6 == -0x83) {
          uVar15 = proper_name_lite("Simon Josefsson","Simon Josefsson");
          version_etc(_stdout,"base64","GNU coreutils",_Version,uVar15,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar6 != -0x82) goto LAB_00100c0e;
        iVar6 = usage(0);
      }
      if (iVar6 != 0x69) break;
      local_90 = (void *)CONCAT71(local_90._1_7_,1);
    }
    if (iVar6 != 0x77) goto LAB_00100c0e;
    uVar7 = xstrtoimax(_optarg,0,10,&local_58);
    if ((1 < uVar7) || ((long)local_58 < 0)) break;
    uVar21 = local_58;
    if (uVar7 == 1) {
      uVar21 = 0;
    }
  }
LAB_001010fc:
  uVar15 = quote(_optarg);
  uVar16 = dcgettext(0,"invalid wrap size",5);
  error(1,0,"%s: %s",uVar16,uVar15);
LAB_00101139:
  uVar15 = quotearg_n_style_colon(0,3,local_60);
  piVar17 = __errno_location();
  error(1,*piVar17,&_LC2,uVar15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
LAB_00100c0e:
  while( true ) {
    usage(1);
LAB_00100c18:
    if (param_1 - _optind < 2) break;
    param_2 = (undefined8 *)quote(param_2[(long)_optind + 1]);
    uVar15 = dcgettext(0,"extra operand %s",5);
    error(0,0,uVar15,param_2);
  }
  if (param_1 <= _optind) {
    local_60 = "-";
    puVar8 = _stdin;
LAB_00100c6d:
    fadvise(puVar8,2);
    __stream = _stdout;
    if (!bVar4) {
      psVar13 = (size_t *)xmalloc(0x7800);
      local_90 = (void *)xmalloc(0xa000);
      puVar23 = (uint *)0x0;
      pFVar9 = __stream;
      puVar24 = puVar8;
      goto LAB_00100ecd;
    }
    uVar21 = 0x1000;
    local_48 = 0x3d3d3d3d;
    uStack_44 = 0x3d3d3d3d;
    pFVar9 = (FILE *)xmalloc(0x1000);
    __ptr = (uint *)xmalloc(0xc00);
    local_50[0] = 0;
    do {
      uVar19 = 0;
      do {
        uVar20 = uVar19;
        if (uVar19 <= uVar21) {
          uVar20 = uVar21;
        }
        lVar10 = __fread_unlocked_chk
                           ((long)&pFVar9->_flags + uVar19,uVar20 - uVar19,1,0x1000 - uVar19,puVar8)
        ;
        if (((char)local_90 != '\0') && (0 < lVar10)) {
          lVar22 = 0;
          uVar20 = uVar19;
          do {
            while( true ) {
              pbVar1 = (byte *)((long)&pFVar9->_flags + uVar20);
              bVar2 = *pbVar1;
              if (((char)(&base64_to_int)[bVar2] < '\0') && (bVar2 != 0x3d)) break;
              lVar22 = lVar22 + 1;
              lVar11 = 0;
              if (-1 < lVar22) {
                lVar11 = lVar22;
              }
              if (lVar10 <= lVar11) goto LAB_00100cdd;
              uVar20 = lVar22 + uVar19;
            }
            lVar10 = lVar10 + -1;
            uVar18 = uVar20;
            if (uVar20 <= uVar21) {
              uVar18 = uVar21;
            }
            __memmove_chk(pbVar1,(long)&pFVar9->_flags + uVar20 + 1,lVar10 - lVar22,uVar18 - uVar20)
            ;
            lVar11 = 0;
            if (-1 < lVar22) {
              lVar11 = lVar22;
            }
          } while (lVar11 < lVar10);
        }
LAB_00100cdd:
        uVar19 = uVar19 + lVar10;
        uVar7 = *puVar8 & 0x20;
        puVar23 = (uint *)(ulong)uVar7;
        if (uVar7 != 0) goto LAB_001010ac;
      } while (((long)uVar19 < 0x1000) && ((*puVar8 & 0x10) == 0));
      local_80 = &local_58;
      local_78 = local_50;
      while( true ) {
        local_58 = 0xc00;
        uVar7 = base64_decode_ctx(local_78,pFVar9,uVar19,__ptr,local_80);
        psVar13 = (size_t *)(ulong)uVar7;
        sVar12 = fwrite_unlocked(__ptr,1,local_58,__stream);
        puVar5 = __ptr;
        local_88 = puVar8;
        if (sVar12 < local_58) goto LAB_00101049;
        if ((char)uVar7 == '\0') goto LAB_001010d8;
        if ((*puVar8 & 0x10) == 0) break;
        if (((int)puVar23 != 0) || (local_50[0] == 0)) {
          finish_and_exit(puVar8,local_60);
          goto LAB_00101093;
        }
        if (((local_50[0] & 3) == 0) ||
           ((uVar19 != 0 && (*(char *)((long)pFVar9 + (uVar19 - 1)) == '=')))) {
          uVar19 = 0;
        }
        else {
          pFVar9 = (FILE *)&stack0xffffffffffffffb8;
          uVar21 = 8;
          uVar19 = (ulong)(4 - (int)local_50[0] % 4);
        }
        puVar23 = (uint *)0x1;
      }
    } while( true );
  }
  local_60 = (char *)param_2[_optind];
  iVar6 = strcmp(local_60,"-");
  puVar8 = _stdin;
  if ((iVar6 == 0) || (puVar8 = (uint *)rpl_fopen(local_60,&_LC38), puVar8 != (uint *)0x0))
  goto LAB_00100c6d;
  goto LAB_00101139;
LAB_00101093:
  do {
    iVar6 = __overflow(pFVar9,10);
    puVar5 = __ptr;
    if (iVar6 == -1) goto LAB_00101049;
    uVar7 = *puVar8;
LAB_00100f2a:
    do {
      if ((uVar7 & 0x20) != 0) goto LAB_001010ac;
      finish_and_exit(puVar8,local_60);
      puVar24 = puVar23;
      do {
        puVar23 = (uint *)(((long)((long)__ptr + 2U) / 3) * 4);
        base64_encode(psVar13,__ptr,local_90,puVar23);
        if (uVar21 == 0) {
          puVar14 = (uint *)fwrite_unlocked(local_90,1,(size_t)puVar23,_stdout);
          puVar5 = __ptr;
          local_88 = puVar23;
          if (puVar14 < puVar23) {
LAB_00101049:
            puVar8 = puVar5;
            write_error();
            psVar13 = local_80;
            __ptr = local_78;
            puVar24 = local_88;
          }
        }
        else {
          lVar10 = 0;
          do {
            uVar19 = (long)puVar23 - lVar10;
            if ((long)(uVar21 - (long)puVar8) < (long)puVar23 - lVar10) {
              uVar19 = uVar21 - (long)puVar8;
            }
            puVar5 = puVar8;
            local_88 = puVar24;
            local_80 = psVar13;
            local_78 = __ptr;
            if (uVar19 == 0) {
              pcVar3 = pFVar9->_IO_write_ptr;
              if (pcVar3 < pFVar9->_IO_write_end) {
                pFVar9->_IO_write_ptr = pcVar3 + 1;
                *pcVar3 = '\n';
              }
              else {
                iVar6 = __overflow(pFVar9,10);
                if (iVar6 == -1) goto LAB_00101049;
              }
              puVar8 = (uint *)0x0;
            }
            else {
              sVar12 = fwrite_unlocked((void *)((long)local_90 + lVar10),1,uVar19,_stdout);
              if (sVar12 < uVar19) goto LAB_00101049;
              puVar8 = (uint *)((long)puVar8 + uVar19);
              lVar10 = lVar10 + uVar19;
            }
          } while (lVar10 < (long)puVar23);
        }
        uVar7 = *puVar24;
        puVar23 = puVar8;
        if (((uVar7 & 0x30) != 0) || (__ptr != (uint *)0x7800)) break;
LAB_00100ecd:
        puVar8 = puVar23;
        __ptr = (uint *)0x0;
        do {
          puVar23 = (uint *)0x7800;
          if ((uint *)0x77ff < __ptr) {
            puVar23 = __ptr;
          }
          lVar10 = __fread_unlocked_chk
                             ((byte *)((long)psVar13 + (long)__ptr),(long)puVar23 - (long)__ptr,1,
                              0x7800 - (long)__ptr,puVar24);
          __ptr = (uint *)((long)__ptr + lVar10);
          uVar7 = *puVar24;
        } while (((uVar7 & 0x30) == 0) && ((long)__ptr < 0x7800));
        puVar23 = puVar8;
      } while (0 < (long)__ptr);
      puVar8 = puVar24;
    } while ((uVar21 == 0) || ((long)puVar23 < 1));
    pcVar3 = pFVar9->_IO_write_ptr;
  } while (pFVar9->_IO_write_end <= pcVar3);
  pFVar9->_IO_write_ptr = pcVar3 + 1;
  *pcVar3 = '\n';
  uVar7 = *puVar8;
  goto LAB_00100f2a;
LAB_001010ac:
  uVar15 = dcgettext(0,"read error",5);
  piVar17 = __errno_location();
  error(1,*piVar17,uVar15);
LAB_001010d8:
  uVar15 = dcgettext(0,"invalid input",5);
  error(1,0,uVar15);
  goto LAB_001010fc;
}


