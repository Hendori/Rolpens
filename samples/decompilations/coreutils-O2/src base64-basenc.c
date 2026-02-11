
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
  char cVar5;
  int iVar6;
  uint uVar7;
  FILE *pFVar8;
  FILE *pFVar9;
  FILE *pFVar10;
  long lVar11;
  FILE *pFVar12;
  long lVar13;
  FILE *pFVar14;
  size_t sVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int *piVar18;
  FILE *pFVar19;
  ulong __n;
  FILE *__ptr;
  FILE *pFVar20;
  FILE *pFVar21;
  long in_FS_OFFSET;
  void *local_90;
  FILE *local_88;
  FILE *local_80;
  FILE *local_78;
  FILE *local_70;
  char *local_68;
  undefined1 local_58 [16];
  char *local_48;
  char *local_40;
  
  bVar4 = false;
  local_40 = *(char **)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_90 = (void *)((ulong)local_90 & 0xffffffffffffff00);
  __ptr = (FILE *)0x4c;
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
          uVar16 = proper_name_lite("Simon Josefsson","Simon Josefsson");
          version_etc(_stdout,"base64","GNU coreutils",_Version,uVar16,0);
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
    uVar7 = xstrtoimax(_optarg,0,10,local_58);
    if ((1 < uVar7) || ((long)local_58._0_8_ < 0)) break;
    __ptr = (FILE *)local_58._0_8_;
    if (uVar7 == 1) {
      __ptr = (FILE *)0x0;
    }
  }
LAB_001010b5:
  uVar16 = quote(_optarg);
  uVar17 = dcgettext(0,"invalid wrap size",5);
  error(1,0,"%s: %s",uVar17,uVar16);
LAB_001010f2:
  uVar16 = quotearg_n_style_colon(0,3,local_68);
  piVar18 = __errno_location();
  error(1,*piVar18,&_LC2,uVar16);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
LAB_00100c0e:
  while( true ) {
    usage(1);
LAB_00100c18:
    if (param_1 - _optind < 2) break;
    param_2 = (undefined8 *)quote(param_2[(long)_optind + 1]);
    uVar16 = dcgettext(0,"extra operand %s",5);
    error(0,0,uVar16,param_2);
  }
  if (_optind < param_1) {
    local_68 = (char *)param_2[_optind];
    iVar6 = strcmp(local_68,"-");
    pFVar8 = _stdin;
    if ((iVar6 != 0) && (pFVar8 = (FILE *)rpl_fopen(local_68,&_LC38), pFVar8 == (FILE *)0x0))
    goto LAB_001010f2;
  }
  else {
    local_68 = "-";
    pFVar8 = _stdin;
  }
  fadvise(pFVar8,2);
  pFVar14 = _stdout;
  if (!bVar4) goto LAB_00100e7e;
  local_70 = (FILE *)0x1000;
  local_78 = _stdout;
  local_48 = (char *)0x3d3d3d3d3d3d3d3d;
  pFVar9 = (FILE *)xmalloc(0x1000);
  __ptr = (FILE *)xmalloc(0xc00);
  local_58._8_4_ = 0;
  do {
    pFVar20 = (FILE *)0x0;
    do {
      pFVar10 = pFVar20;
      if (pFVar20 <= local_70) {
        pFVar10 = local_70;
      }
      pFVar10 = (FILE *)__fread_unlocked_chk
                                  ((long)&pFVar20->_flags + (long)&pFVar9->_flags,
                                   (long)pFVar10 - (long)pFVar20,1,0x1000 - (long)pFVar20,pFVar8);
      if (((char)local_90 != '\0') && (0 < (long)pFVar10)) {
        lVar13 = 0;
        do {
          pFVar21 = (FILE *)((long)&pFVar20->_flags + lVar13);
          pbVar1 = (byte *)((long)&pFVar21->_flags + (long)&pFVar9->_flags);
          bVar2 = *pbVar1;
          if (((char)(&base64_to_int)[bVar2] < '\0') && (bVar2 != 0x3d)) {
            pFVar10 = (FILE *)(pFVar10[-1]._unused2 + 0x13);
            pFVar19 = pFVar21;
            if (pFVar21 <= local_70) {
              pFVar19 = local_70;
            }
            __memmove_chk(pbVar1,(undefined1 *)((long)&pFVar9->_flags + 1) + (long)pFVar21,
                          (long)pFVar10 - lVar13,(long)pFVar19 - (long)pFVar21);
          }
          else {
            lVar13 = lVar13 + 1;
          }
          lVar11 = 0;
          if (-1 < lVar13) {
            lVar11 = lVar13;
          }
        } while (lVar11 < (long)pFVar10);
      }
      pFVar20 = (FILE *)((long)&pFVar10->_flags + (long)&pFVar20->_flags);
      uVar7 = pFVar8->_flags & 0x20;
      pFVar21 = (FILE *)(ulong)uVar7;
      if (uVar7 != 0) goto LAB_00100f0a;
    } while (((long)pFVar20 < 0x1000) && ((pFVar8->_flags & 0x10U) == 0));
    local_88 = (FILE *)local_58;
    local_80 = (FILE *)(local_58 + 8);
    while( true ) {
      local_58._0_8_ = (FILE *)0xc00;
      cVar5 = base64_decode_ctx(local_80,pFVar9,pFVar20,__ptr,local_88);
      pFVar12 = (FILE *)fwrite_unlocked(__ptr,1,local_58._0_8_,pFVar14);
      pFVar19 = pFVar20;
      pFVar10 = pFVar9;
      if (pFVar12 < (ulong)local_58._0_8_) goto LAB_00101040;
      if (cVar5 == '\0') {
        uVar16 = dcgettext(0,"invalid input",5);
        error(1,0,uVar16);
        goto LAB_001010b5;
      }
      if ((pFVar8->_flags & 0x10) == 0) break;
      if (((int)pFVar21 != 0) || (local_58._8_4_ == 0)) {
LAB_00100e71:
        finish_and_exit(pFVar8,local_68);
LAB_00100e7e:
        pFVar10 = _stdout;
        pFVar14 = (FILE *)0x0;
        pFVar9 = (FILE *)xmalloc(0x7800);
        local_90 = (void *)xmalloc(0xa000);
        pFVar21 = pFVar8;
        do {
          pFVar20 = (FILE *)0x0;
          do {
            pFVar8 = (FILE *)0x7800;
            if ((FILE *)0x77ff < pFVar20) {
              pFVar8 = pFVar20;
            }
            lVar13 = __fread_unlocked_chk
                               ((long)&pFVar20->_flags + (long)&pFVar9->_flags,
                                (long)pFVar8 - (long)pFVar20,1,0x7800 - (long)pFVar20,pFVar21);
            pFVar20 = (FILE *)((long)&pFVar20->_flags + lVar13);
            uVar7 = pFVar21->_flags;
          } while (((uVar7 & 0x30) == 0) && ((long)pFVar20 < 0x7800));
          pFVar8 = pFVar21;
          if (0 < (long)pFVar20) goto LAB_00100f36;
          do {
            if ((__ptr == (FILE *)0x0) || ((long)pFVar14 < 1)) {
LAB_00100f02:
              local_70 = __ptr;
              pFVar21 = pFVar14;
              if ((uVar7 & 0x20) == 0) goto LAB_00100e71;
LAB_00100f0a:
              pFVar14 = (FILE *)dcgettext(0,"read error",5);
              piVar18 = __errno_location();
              error(1,*piVar18,pFVar14);
              __ptr = local_70;
LAB_00100f36:
              pFVar8 = (FILE *)(((long)((long)&pFVar20->_flags + 2) / 3) * 4);
              base64_encode(pFVar9,pFVar20,local_90,pFVar8);
              if (__ptr == (FILE *)0x0) {
                pFVar12 = (FILE *)fwrite_unlocked(local_90,1,(size_t)pFVar8,_stdout);
                pFVar19 = pFVar20;
                local_88 = pFVar8;
                if (pFVar12 < pFVar8) goto LAB_00101040;
              }
              else {
                lVar13 = 0;
                do {
                  __n = (long)pFVar8 - lVar13;
                  if ((long)__ptr - (long)pFVar14 < (long)pFVar8 - lVar13) {
                    __n = (long)__ptr - (long)pFVar14;
                  }
                  pFVar19 = pFVar14;
                  local_88 = pFVar21;
                  local_80 = pFVar9;
                  local_78 = pFVar20;
                  if (__n == 0) {
                    pcVar3 = pFVar10->_IO_write_ptr;
                    if (pcVar3 < pFVar10->_IO_write_end) {
                      pFVar10->_IO_write_ptr = pcVar3 + 1;
                      *pcVar3 = '\n';
                    }
                    else {
                      iVar6 = __overflow(pFVar10,10);
                      if (iVar6 == -1) goto LAB_00101040;
                    }
                    pFVar14 = (FILE *)0x0;
                  }
                  else {
                    sVar15 = fwrite_unlocked((void *)((long)local_90 + lVar13),1,__n,_stdout);
                    if (sVar15 < __n) goto LAB_00101040;
                    pFVar14 = (FILE *)((long)&pFVar14->_flags + __n);
                    lVar13 = lVar13 + __n;
                  }
                } while (lVar13 < (long)pFVar8);
              }
            }
            else {
              pcVar3 = pFVar10->_IO_write_ptr;
              if (pcVar3 < pFVar10->_IO_write_end) {
                pFVar10->_IO_write_ptr = pcVar3 + 1;
                *pcVar3 = '\n';
                uVar7 = pFVar8->_flags;
                goto LAB_00100f02;
              }
              iVar6 = __overflow(pFVar10,10);
              pFVar19 = pFVar20;
              if (iVar6 != -1) {
                uVar7 = pFVar8->_flags;
                goto LAB_00100f02;
              }
LAB_00101040:
              pFVar14 = pFVar19;
              write_error();
              pFVar9 = local_80;
              pFVar20 = local_78;
              pFVar21 = local_88;
            }
            uVar7 = pFVar21->_flags;
            pFVar8 = pFVar21;
          } while (((uVar7 & 0x30) != 0) || (pFVar20 != (FILE *)0x7800));
        } while( true );
      }
      if (((local_58._8_4_ & 3) == 0) ||
         ((pFVar20 != (FILE *)0x0 && ((pFVar9[-1]._unused2 + 0x13)[(long)pFVar20] == '=')))) {
        pFVar20 = (FILE *)0x0;
      }
      else {
        local_70 = (FILE *)0x8;
        pFVar9 = (FILE *)&local_48;
        pFVar20 = (FILE *)(long)(4 - (int)local_58._8_4_ % 4);
      }
      pFVar21 = (FILE *)0x1;
    }
  } while( true );
}


