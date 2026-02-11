
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
  __printf_chk(2,uVar4,0x20);
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
  __printf_chk(2,uVar4,"base32","base32");
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
    iVar2 = strcmp("base32",pcVar5);
    if (iVar2 == 0) break;
    pcVar5 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar5 != (char *)0x0);
  pcVar5 = *(char **)((long)ppuVar7 + 8);
  if (pcVar5 == (char *)0x0) {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar5 = "base32";
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010037d;
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/","base32");
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
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/","base32");
    if (pcVar5 == "base32") {
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

void main(uint param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FILE *pFVar7;
  FILE *pFVar8;
  long lVar9;
  undefined1 *puVar10;
  FILE *pFVar11;
  FILE *pFVar12;
  FILE *pFVar13;
  size_t sVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int *piVar17;
  ulong __n;
  undefined1 *puVar18;
  FILE *__ptr;
  FILE *pFVar19;
  FILE *pFVar20;
  long in_FS_OFFSET;
  void *local_a0;
  FILE *local_98;
  undefined1 *local_90;
  FILE *local_88;
  FILE *local_80;
  char *local_78;
  undefined1 local_60 [32];
  char *local_40;
  
  bVar4 = false;
  puVar18 = (undefined1 *)(ulong)param_1;
  local_40 = *(char **)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_a0 = (void *)((ulong)local_a0 & 0xffffffffffffff00);
  __ptr = (FILE *)0x4c;
  while( true ) {
    while( true ) {
      while( true ) {
        iVar5 = getopt_long(param_1,param_2,&_LC36,long_options,0);
        if (iVar5 == -1) goto LAB_00100c48;
        if (iVar5 != 100) break;
        bVar4 = true;
      }
      if (iVar5 < 0x65) {
        if (iVar5 == -0x83) {
          uVar15 = proper_name_lite("Simon Josefsson","Simon Josefsson");
          version_etc(_stdout,"base32","GNU coreutils",_Version,uVar15,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar5 != -0x82) goto LAB_00100c3e;
        iVar5 = usage(0);
      }
      if (iVar5 != 0x69) break;
      local_a0 = (void *)CONCAT71(local_a0._1_7_,1);
    }
    if (iVar5 != 0x77) goto LAB_00100c3e;
    uVar6 = xstrtoimax(_optarg,0,10,local_60);
    if ((1 < uVar6) || ((long)local_60._0_8_ < 0)) break;
    __ptr = (FILE *)local_60._0_8_;
    if (uVar6 == 1) {
      __ptr = (FILE *)0x0;
    }
  }
LAB_00101124:
  uVar15 = quote(_optarg);
  uVar16 = dcgettext(0,"invalid wrap size",5);
  error(1,0,"%s: %s",uVar16,uVar15);
LAB_00101161:
  uVar15 = quotearg_n_style_colon(0,3,local_78);
  piVar17 = __errno_location();
  error(1,*piVar17,&_LC2,uVar15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
LAB_00100c3e:
  while( true ) {
    usage(1);
LAB_00100c48:
    if ((int)(param_1 - _optind) < 2) break;
    param_2 = (undefined8 *)quote(param_2[(long)_optind + 1]);
    uVar15 = dcgettext(0,"extra operand %s",5);
    error(0,0,uVar15,param_2);
  }
  if (_optind < (int)param_1) {
    local_78 = (char *)param_2[_optind];
    iVar5 = strcmp(local_78,"-");
    pFVar7 = _stdin;
    if ((iVar5 != 0) && (pFVar7 = (FILE *)rpl_fopen(local_78,&_LC38), pFVar7 == (FILE *)0x0))
    goto LAB_00101161;
  }
  else {
    local_78 = "-";
    pFVar7 = _stdin;
  }
  fadvise(pFVar7,2);
  pFVar13 = _stdout;
  if (!bVar4) goto LAB_00100ece;
  local_80 = (FILE *)0x2000;
  local_88 = _stdout;
  local_60._24_8_ = (char *)0x3d3d3d3d3d3d3d3d;
  pFVar8 = (FILE *)xmalloc(0x2000);
  __ptr = (FILE *)xmalloc(0x1400);
  local_60._12_4_ = 0;
  do {
    pFVar19 = (FILE *)0x0;
    do {
      pFVar20 = pFVar19;
      if (pFVar19 <= local_80) {
        pFVar20 = local_80;
      }
      lVar9 = __fread_unlocked_chk
                        ((long)&pFVar19->_flags + (long)&pFVar8->_flags,
                         (long)pFVar20 - (long)pFVar19,1,0x2000 - (long)pFVar19,pFVar7);
      if (((char)local_a0 != '\0') && (0 < lVar9)) {
        puVar18 = (undefined1 *)0x0;
        pFVar20 = pFVar19;
        do {
          while( true ) {
            pbVar1 = (byte *)((long)&pFVar20->_flags + (long)&pFVar8->_flags);
            bVar2 = *pbVar1;
            if (((char)(&base32_to_int)[bVar2] < '\0') && (bVar2 != 0x3d)) break;
            puVar18 = puVar18 + 1;
            puVar10 = (undefined1 *)0x0;
            if (-1 < (long)puVar18) {
              puVar10 = puVar18;
            }
            if (lVar9 <= (long)puVar10) goto LAB_00100cfb;
            pFVar20 = (FILE *)((long)&pFVar19->_flags + (long)puVar18);
          }
          lVar9 = lVar9 + -1;
          pFVar12 = pFVar20;
          if (pFVar20 <= local_80) {
            pFVar12 = local_80;
          }
          __memmove_chk(pbVar1,(undefined1 *)((long)&pFVar8->_flags + 1) + (long)pFVar20,
                        lVar9 - (long)puVar18,(long)pFVar12 - (long)pFVar20);
          puVar10 = (undefined1 *)0x0;
          if (-1 < (long)puVar18) {
            puVar10 = puVar18;
          }
        } while ((long)puVar10 < lVar9);
      }
LAB_00100cfb:
      pFVar19 = (FILE *)((long)&pFVar19->_flags + lVar9);
      uVar6 = pFVar7->_flags & 0x20;
      pFVar20 = (FILE *)(ulong)uVar6;
      if (uVar6 != 0) goto LAB_00100f5a;
    } while (((long)pFVar19 < 0x2000) && ((pFVar7->_flags & 0x10U) == 0));
    local_98 = (FILE *)local_60;
    local_90 = local_60 + 0xc;
    while( true ) {
      local_60._0_8_ = (FILE *)0x1400;
      uVar6 = base32_decode_ctx(local_90,pFVar8,pFVar19,__ptr,local_98);
      puVar18 = (undefined1 *)(ulong)uVar6;
      pFVar11 = (FILE *)fwrite_unlocked(__ptr,1,local_60._0_8_,pFVar13);
      pFVar12 = pFVar19;
      if (pFVar11 < (ulong)local_60._0_8_) goto LAB_00101090;
      if ((char)uVar6 == '\0') {
        uVar15 = dcgettext(0,"invalid input",5);
        error(1,0,uVar15);
        goto LAB_00101124;
      }
      if ((pFVar7->_flags & 0x10) == 0) break;
      if (((int)pFVar20 != 0) || (local_60._12_4_ == 0)) {
LAB_00100ec1:
        finish_and_exit(pFVar7,local_78);
LAB_00100ece:
        pFVar20 = _stdout;
        pFVar13 = (FILE *)0x0;
        puVar18 = (undefined1 *)xmalloc(0x7800);
        local_a0 = (void *)xmalloc(0xc000);
        pFVar8 = pFVar7;
        do {
          pFVar19 = (FILE *)0x0;
          do {
            pFVar7 = (FILE *)0x7800;
            if ((FILE *)0x77ff < pFVar19) {
              pFVar7 = pFVar19;
            }
            lVar9 = __fread_unlocked_chk
                              ((undefined1 *)((long)&pFVar19->_flags + (long)puVar18),
                               (long)pFVar7 - (long)pFVar19,1,0x7800 - (long)pFVar19,pFVar8);
            pFVar19 = (FILE *)((long)&pFVar19->_flags + lVar9);
            uVar6 = pFVar8->_flags;
          } while (((uVar6 & 0x30) == 0) && ((long)pFVar19 < 0x7800));
          pFVar7 = pFVar8;
          if (0 < (long)pFVar19) goto LAB_00100f86;
          do {
            if ((__ptr == (FILE *)0x0) || ((long)pFVar13 < 1)) {
LAB_00100f52:
              local_80 = __ptr;
              pFVar8 = pFVar13;
              if ((uVar6 & 0x20) == 0) goto LAB_00100ec1;
LAB_00100f5a:
              pFVar13 = (FILE *)dcgettext(0,"read error",5);
              piVar17 = __errno_location();
              error(1,*piVar17,pFVar13);
              __ptr = local_80;
LAB_00100f86:
              pFVar7 = (FILE *)(((long)&pFVar19->field_0x4 / 5) * 8);
              base32_encode(puVar18,pFVar19,local_a0,pFVar7);
              if (__ptr == (FILE *)0x0) {
                pFVar11 = (FILE *)fwrite_unlocked(local_a0,1,(size_t)pFVar7,_stdout);
                pFVar12 = pFVar19;
                local_98 = pFVar7;
                if (pFVar11 < pFVar7) goto LAB_00101090;
              }
              else {
                lVar9 = 0;
                do {
                  __n = (long)pFVar7 - lVar9;
                  if ((long)__ptr - (long)pFVar13 < (long)pFVar7 - lVar9) {
                    __n = (long)__ptr - (long)pFVar13;
                  }
                  pFVar12 = pFVar13;
                  local_98 = pFVar8;
                  local_90 = puVar18;
                  local_88 = pFVar19;
                  if (__n == 0) {
                    pcVar3 = pFVar20->_IO_write_ptr;
                    if (pcVar3 < pFVar20->_IO_write_end) {
                      pFVar20->_IO_write_ptr = pcVar3 + 1;
                      *pcVar3 = '\n';
                    }
                    else {
                      iVar5 = __overflow(pFVar20,10);
                      if (iVar5 == -1) goto LAB_00101090;
                    }
                    pFVar13 = (FILE *)0x0;
                  }
                  else {
                    sVar14 = fwrite_unlocked((void *)((long)local_a0 + lVar9),1,__n,_stdout);
                    if (sVar14 < __n) goto LAB_00101090;
                    pFVar13 = (FILE *)((long)&pFVar13->_flags + __n);
                    lVar9 = lVar9 + __n;
                  }
                } while (lVar9 < (long)pFVar7);
              }
            }
            else {
              pcVar3 = pFVar20->_IO_write_ptr;
              if (pcVar3 < pFVar20->_IO_write_end) {
                pFVar20->_IO_write_ptr = pcVar3 + 1;
                *pcVar3 = '\n';
                uVar6 = pFVar7->_flags;
                goto LAB_00100f52;
              }
              iVar5 = __overflow(pFVar20,10);
              pFVar12 = pFVar19;
              if (iVar5 != -1) {
                uVar6 = pFVar7->_flags;
                goto LAB_00100f52;
              }
LAB_00101090:
              pFVar13 = pFVar12;
              write_error();
              puVar18 = local_90;
              pFVar19 = local_88;
              pFVar8 = local_98;
            }
            uVar6 = pFVar8->_flags;
            pFVar7 = pFVar8;
          } while (((uVar6 & 0x30) != 0) || (pFVar19 != (FILE *)0x7800));
        } while( true );
      }
      if ((local_60._12_4_ & 7) == 0) {
LAB_00100ea5:
        pFVar12 = (FILE *)0x0;
      }
      else {
        iVar5 = 8 - (int)local_60._12_4_ % 8;
        pFVar12 = (FILE *)(long)iVar5;
        if ((pFVar19 != (FILE *)0x0) && ((pFVar8[-1]._unused2 + 0x13)[(long)pFVar19] == '='))
        goto LAB_00100ea5;
        if (8 < iVar5) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("auto_padding <= sizeof (padbuf)","src/basenc.c",0x4a7,"do_decode");
        }
        local_80 = (FILE *)0x8;
        pFVar8 = (FILE *)(local_60 + 0x18);
      }
      pFVar20 = (FILE *)0x1;
      pFVar19 = pFVar12;
    }
  } while( true );
}


