
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
  FILE *pFVar5;
  int iVar6;
  uint uVar7;
  FILE *pFVar8;
  FILE *pFVar9;
  FILE *pFVar10;
  FILE *pFVar11;
  long lVar12;
  FILE *pFVar13;
  FILE *pFVar14;
  size_t sVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int *piVar18;
  ulong __n;
  FILE *pFVar19;
  FILE *pFVar20;
  long in_FS_OFFSET;
  void *local_98;
  FILE *local_90;
  FILE *local_88;
  FILE *local_80;
  FILE *local_78;
  char *local_70;
  undefined1 local_60 [24];
  char *local_48;
  char *local_40;
  
  bVar4 = false;
  pFVar11 = (FILE *)(ulong)param_1;
  local_40 = *(char **)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_98 = (void *)((ulong)local_98 & 0xffffffffffffff00);
  pFVar19 = (FILE *)0x4c;
  while( true ) {
    while( true ) {
      while( true ) {
        iVar6 = getopt_long(param_1,param_2,&_LC36,long_options,0);
        if (iVar6 == -1) goto LAB_00100c3f;
        if (iVar6 != 100) break;
        bVar4 = true;
      }
      if (iVar6 < 0x65) {
        if (iVar6 == -0x83) {
          uVar16 = proper_name_lite("Simon Josefsson","Simon Josefsson");
          version_etc(_stdout,"base32","GNU coreutils",_Version,uVar16,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar6 != -0x82) goto LAB_00100c35;
        iVar6 = usage(0);
      }
      if (iVar6 != 0x69) break;
      local_98 = (void *)CONCAT71(local_98._1_7_,1);
    }
    if (iVar6 != 0x77) goto LAB_00100c35;
    uVar7 = xstrtoimax(_optarg,0,10,local_60);
    if ((1 < uVar7) || ((long)local_60._0_8_ < 0)) break;
    pFVar19 = (FILE *)local_60._0_8_;
    if (uVar7 == 1) {
      pFVar19 = (FILE *)0x0;
    }
  }
LAB_001010f9:
  uVar16 = quote(_optarg);
  uVar17 = dcgettext(0,"invalid wrap size",5);
  error(1,0,"%s: %s",uVar17,uVar16);
LAB_00101136:
  uVar16 = quotearg_n_style_colon(0,3,local_70);
  piVar18 = __errno_location();
  error(1,*piVar18,&_LC2,uVar16);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
LAB_00100c35:
  while( true ) {
    usage(1);
LAB_00100c3f:
    if ((int)(param_1 - _optind) < 2) break;
    param_2 = (undefined8 *)quote(param_2[(long)_optind + 1]);
    uVar16 = dcgettext(0,"extra operand %s",5);
    error(0,0,uVar16,param_2);
  }
  if (_optind < (int)param_1) {
    local_70 = (char *)param_2[_optind];
    iVar6 = strcmp(local_70,"-");
    pFVar8 = _stdin;
    if ((iVar6 != 0) && (pFVar8 = (FILE *)rpl_fopen(local_70,&_LC38), pFVar8 == (FILE *)0x0))
    goto LAB_00101136;
  }
  else {
    local_70 = "-";
    pFVar8 = _stdin;
  }
  fadvise(pFVar8,2);
  pFVar5 = _stdout;
  if (!bVar4) goto LAB_00100ea8;
  local_78 = (FILE *)0x2000;
  local_48 = (char *)0x3d3d3d3d3d3d3d3d;
  pFVar9 = (FILE *)xmalloc(0x2000);
  local_90 = (FILE *)xmalloc(0x1400);
  local_60._12_4_ = 0;
  do {
    pFVar20 = (FILE *)0x0;
    do {
      pFVar19 = pFVar20;
      if (pFVar20 <= local_78) {
        pFVar19 = local_78;
      }
      pFVar10 = (FILE *)__fread_unlocked_chk
                                  ((long)&pFVar20->_flags + (long)&pFVar9->_flags,
                                   (long)pFVar19 - (long)pFVar20,1,0x2000 - (long)pFVar20,pFVar8);
      if (((char)local_98 != '\0') && (0 < (long)pFVar10)) {
        pFVar11 = (FILE *)0x0;
        do {
          pFVar19 = (FILE *)((long)&pFVar11->_flags + (long)&pFVar20->_flags);
          pbVar1 = (byte *)((long)&pFVar19->_flags + (long)&pFVar9->_flags);
          bVar2 = *pbVar1;
          if (((char)(&base32_to_int)[bVar2] < '\0') && (bVar2 != 0x3d)) {
            pFVar10 = (FILE *)(pFVar10[-1]._unused2 + 0x13);
            pFVar13 = pFVar19;
            if (pFVar19 <= local_78) {
              pFVar13 = local_78;
            }
            __memmove_chk(pbVar1,(undefined1 *)((long)&pFVar9->_flags + 1) + (long)pFVar19,
                          (long)pFVar10 - (long)pFVar11,(long)pFVar13 - (long)pFVar19);
          }
          else {
            pFVar11 = (FILE *)((long)&pFVar11->_flags + 1);
          }
          pFVar19 = (FILE *)0x0;
          if (-1 < (long)pFVar11) {
            pFVar19 = pFVar11;
          }
        } while ((long)pFVar19 < (long)pFVar10);
      }
      pFVar20 = (FILE *)((long)&pFVar10->_flags + (long)&pFVar20->_flags);
      pFVar19 = local_78;
      local_88 = pFVar5;
      if ((pFVar8->_flags & 0x20U) != 0) goto LAB_00100f32;
    } while (((long)pFVar20 < 0x2000) && ((pFVar8->_flags & 0x10U) == 0));
    local_88 = (FILE *)local_60;
    pFVar19 = (FILE *)0x0;
    local_80 = (FILE *)(local_60 + 0xc);
    while( true ) {
      local_60._0_8_ = (FILE *)0x1400;
      uVar7 = base32_decode_ctx(local_80,pFVar9,pFVar20,local_90,local_88);
      pFVar11 = (FILE *)(ulong)uVar7;
      pFVar10 = (FILE *)fwrite_unlocked(local_90,1,local_60._0_8_,pFVar5);
      if (pFVar10 < (ulong)local_60._0_8_) goto LAB_00101065;
      if ((char)uVar7 == '\0') {
        uVar16 = dcgettext(0,"invalid input",5);
        error(1,0,uVar16);
        goto LAB_001010f9;
      }
      if ((pFVar8->_flags & 0x10) == 0) break;
      if (((int)pFVar19 != 0) || (local_60._12_4_ == 0)) {
LAB_00100e9b:
        finish_and_exit(pFVar8,local_70);
LAB_00100ea8:
        pFVar9 = _stdout;
        pFVar13 = (FILE *)0x0;
        pFVar11 = (FILE *)xmalloc(0x7800);
        local_98 = (void *)xmalloc(0xc000);
        pFVar20 = pFVar8;
        do {
          pFVar10 = (FILE *)0x0;
          do {
            pFVar8 = (FILE *)0x7800;
            if ((FILE *)0x77ff < pFVar10) {
              pFVar8 = pFVar10;
            }
            lVar12 = __fread_unlocked_chk
                               ((long)&pFVar10->_flags + (long)&pFVar11->_flags,
                                (long)pFVar8 - (long)pFVar10,1,0x7800 - (long)pFVar10,pFVar20);
            pFVar10 = (FILE *)((long)&pFVar10->_flags + lVar12);
            uVar7 = pFVar20->_flags;
          } while (((uVar7 & 0x30) == 0) && ((long)pFVar10 < 0x7800));
          pFVar8 = pFVar20;
          if (0 < (long)pFVar10) goto LAB_00100f5e;
          do {
            if ((pFVar19 == (FILE *)0x0) || ((long)pFVar13 < 1)) {
LAB_00100f2a:
              pFVar20 = pFVar13;
              if ((uVar7 & 0x20) == 0) goto LAB_00100e9b;
LAB_00100f32:
              pFVar13 = (FILE *)dcgettext(0,"read error",5);
              piVar18 = __errno_location();
              error(1,*piVar18,pFVar13);
LAB_00100f5e:
              pFVar8 = (FILE *)(((long)&pFVar10->field_0x4 / 5) * 8);
              base32_encode(pFVar11,pFVar10,local_98,pFVar8);
              if (pFVar19 == (FILE *)0x0) {
                pFVar14 = (FILE *)fwrite_unlocked(local_98,1,(size_t)pFVar8,_stdout);
                pFVar5 = pFVar10;
                local_90 = pFVar8;
                if (pFVar14 < pFVar8) goto LAB_00101065;
              }
              else {
                lVar12 = 0;
                do {
                  __n = (long)pFVar8 - lVar12;
                  if ((long)pFVar19 - (long)pFVar13 < (long)pFVar8 - lVar12) {
                    __n = (long)pFVar19 - (long)pFVar13;
                  }
                  pFVar5 = pFVar13;
                  local_90 = pFVar20;
                  local_88 = pFVar11;
                  local_80 = pFVar10;
                  if (__n == 0) {
                    pcVar3 = pFVar9->_IO_write_ptr;
                    if (pcVar3 < pFVar9->_IO_write_end) {
                      pFVar9->_IO_write_ptr = pcVar3 + 1;
                      *pcVar3 = '\n';
                    }
                    else {
                      iVar6 = __overflow(pFVar9,10);
                      if (iVar6 == -1) goto LAB_00101065;
                    }
                    pFVar13 = (FILE *)0x0;
                  }
                  else {
                    sVar15 = fwrite_unlocked((void *)((long)local_98 + lVar12),1,__n,_stdout);
                    if (sVar15 < __n) goto LAB_00101065;
                    pFVar13 = (FILE *)((long)&pFVar13->_flags + __n);
                    lVar12 = lVar12 + __n;
                  }
                } while (lVar12 < (long)pFVar8);
              }
            }
            else {
              pcVar3 = pFVar9->_IO_write_ptr;
              if (pcVar3 < pFVar9->_IO_write_end) {
                pFVar9->_IO_write_ptr = pcVar3 + 1;
                *pcVar3 = '\n';
                uVar7 = pFVar8->_flags;
                goto LAB_00100f2a;
              }
              iVar6 = __overflow(pFVar9,10);
              pFVar5 = pFVar10;
              if (iVar6 != -1) {
                uVar7 = pFVar8->_flags;
                goto LAB_00100f2a;
              }
LAB_00101065:
              pFVar13 = pFVar5;
              write_error();
              pFVar11 = local_88;
              pFVar10 = local_80;
              pFVar20 = local_90;
            }
            uVar7 = pFVar20->_flags;
            pFVar8 = pFVar20;
          } while (((uVar7 & 0x30) != 0) || (pFVar10 != (FILE *)0x7800));
        } while( true );
      }
      if ((local_60._12_4_ & 7) == 0) {
LAB_00100e7f:
        pFVar11 = (FILE *)0x0;
      }
      else {
        iVar6 = 8 - (int)local_60._12_4_ % 8;
        pFVar11 = (FILE *)(long)iVar6;
        if ((pFVar20 != (FILE *)0x0) && ((pFVar9[-1]._unused2 + 0x13)[(long)pFVar20] == '='))
        goto LAB_00100e7f;
        if (8 < iVar6) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("auto_padding <= sizeof (padbuf)","src/basenc.c",0x4a7,"do_decode");
        }
        local_78 = (FILE *)0x8;
        pFVar9 = (FILE *)&local_48;
      }
      pFVar19 = (FILE *)0x1;
      pFVar20 = pFVar11;
    }
  } while( true );
}


