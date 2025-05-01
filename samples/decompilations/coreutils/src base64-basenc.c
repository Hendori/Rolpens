
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



/* WARNING: Unknown calling convention */

void finish_and_exit(FILE *in,char *infile)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  iVar1 = rpl_fclose();
  if (iVar1 != 0) {
    if ((*infile == '-') && (infile[1] == '\0')) {
      infile = (char *)dcgettext(0,"closing standard input",5);
      piVar2 = __errno_location();
      error(1,*piVar2,infile);
    }
    uVar3 = quotearg_n_style_colon(0,3,infile);
    piVar2 = __errno_location();
    error(1,*piVar2,&_LC2,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void usage(int status)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  infomap *piVar7;
  infomap infomap [7];
  
  uVar4 = _program_name;
  piVar7 = infomap;
  if (status != 0) {
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
    iVar2 = strcmp("base64",pcVar5);
    if (iVar2 == 0) break;
    pcVar5 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar5 != (char *)0x0);
  pcVar5 = *(char **)((long)piVar7 + 8);
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
  exit(status);
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  bool bVar4;
  FILE *pFVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  FILE *pFVar10;
  FILE *pFVar11;
  FILE *pFVar12;
  long lVar13;
  size_t sVar14;
  FILE *pFVar15;
  FILE *pFVar16;
  undefined8 uVar17;
  int *piVar18;
  ulong __n;
  FILE *__ptr;
  FILE *pFVar19;
  FILE *pFVar20;
  long lVar21;
  void *local_90;
  FILE *local_88;
  FILE *local_80;
  FILE *local_78;
  FILE *local_70;
  char *local_68;
  intmax_t w;
  base64_decode_context ctx;
  char padbuf [8];
  
  bVar4 = false;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_90 = (void *)((ulong)local_90 & 0xffffffffffffff00);
  __ptr = (FILE *)0x4c;
  while (iVar7 = getopt_long(argc,argv,&_LC36,long_options,0), iVar7 != -1) {
    if (iVar7 == 100) {
      bVar4 = true;
    }
    else {
      if (iVar7 < 0x65) {
        if (iVar7 == -0x83) {
          uVar9 = proper_name_lite("Simon Josefsson","Simon Josefsson");
          version_etc(_stdout,"base64","GNU coreutils",_Version,uVar9,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar7 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        goto LAB_00100c0e;
      }
      if (iVar7 == 0x69) {
        local_90 = (void *)CONCAT71(local_90._1_7_,1);
      }
      else {
        if (iVar7 != 0x77) goto LAB_00100c0e;
        uVar8 = xstrtoimax(_optarg,0,10,&w);
        if ((1 < uVar8) || (w < 0)) goto LAB_001010b5;
        __ptr = (FILE *)w;
        if (uVar8 == 1) {
          __ptr = (FILE *)0x0;
        }
      }
    }
  }
  if (1 < argc - _optind) {
    uVar9 = quote(argv[(long)_optind + 1]);
    uVar17 = dcgettext(0,"extra operand %s",5);
    error(0,0,uVar17,uVar9);
LAB_00100c0e:
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  if (_optind < argc) {
    local_68 = argv[_optind];
    iVar7 = strcmp(local_68,"-");
    pFVar10 = _stdin;
    if ((iVar7 != 0) && (pFVar10 = (FILE *)rpl_fopen(local_68,&_LC38), pFVar10 == (FILE *)0x0))
    goto LAB_001010f2;
  }
  else {
    local_68 = "-";
    pFVar10 = _stdin;
  }
  fadvise(pFVar10,2);
  pFVar16 = _stdout;
  if (!bVar4) {
    pFVar15 = (FILE *)0x0;
    pFVar11 = (FILE *)xmalloc(0x7800);
    local_90 = (void *)xmalloc(0xa000);
    pFVar12 = pFVar16;
    pFVar20 = pFVar10;
    goto LAB_00100ea7;
  }
  local_70 = (FILE *)0x1000;
  local_78 = _stdout;
  builtin_strncpy(padbuf,"========",8);
  pFVar11 = (FILE *)xmalloc(0x1000);
  __ptr = (FILE *)xmalloc(0xc00);
  ctx.i = 0;
  do {
    pFVar19 = (FILE *)0x0;
    do {
      pFVar12 = pFVar19;
      if (pFVar19 <= local_70) {
        pFVar12 = local_70;
      }
      pFVar12 = (FILE *)__fread_unlocked_chk
                                  ((long)&pFVar19->_flags + (long)&pFVar11->_flags,
                                   (long)pFVar12 - (long)pFVar19,1,0x1000 - (long)pFVar19,pFVar10);
      if (((char)local_90 != '\0') && (0 < (long)pFVar12)) {
        lVar21 = 0;
        do {
          pFVar20 = (FILE *)((long)&pFVar19->_flags + lVar21);
          pbVar1 = (byte *)((long)&pFVar20->_flags + (long)&pFVar11->_flags);
          bVar2 = *pbVar1;
          if (((char)(&base64_to_int)[bVar2] < '\0') && (bVar2 != 0x3d)) {
            pFVar12 = (FILE *)(pFVar12[-1]._unused2 + 0x13);
            pFVar15 = pFVar20;
            if (pFVar20 <= local_70) {
              pFVar15 = local_70;
            }
            __memmove_chk(pbVar1,(undefined1 *)((long)&pFVar11->_flags + 1) + (long)pFVar20,
                          (long)pFVar12 - lVar21,(long)pFVar15 - (long)pFVar20);
          }
          else {
            lVar21 = lVar21 + 1;
          }
          lVar13 = 0;
          if (-1 < lVar21) {
            lVar13 = lVar21;
          }
        } while (lVar13 < (long)pFVar12);
      }
      pFVar19 = (FILE *)((long)&pFVar12->_flags + (long)&pFVar19->_flags);
      uVar8 = pFVar10->_flags & 0x20;
      pFVar20 = (FILE *)(ulong)uVar8;
      if (uVar8 != 0) goto LAB_00100f0a;
    } while (((long)pFVar19 < 0x1000) && ((pFVar10->_flags & 0x10U) == 0));
    local_80 = (FILE *)&ctx;
    while( true ) {
      w = 0xc00;
      cVar6 = base64_decode_ctx(local_80,pFVar11,pFVar19,__ptr,(FILE *)&w);
      sVar14 = fwrite_unlocked(__ptr,1,w,pFVar16);
      pFVar5 = pFVar19;
      pFVar12 = pFVar11;
      local_88 = (FILE *)&w;
      if (sVar14 < (ulong)w) goto LAB_00101040;
      if (cVar6 == '\0') {
        uVar9 = dcgettext(0,"invalid input",5);
        error(1,0,uVar9);
        goto LAB_001010b5;
      }
      if ((pFVar10->_flags & 0x10) == 0) break;
      if (((int)pFVar20 != 0) || (ctx.i == 0)) goto LAB_00100e71;
      if (((ctx.i & 3U) == 0) ||
         ((pFVar19 != (FILE *)0x0 && ((pFVar11[-1]._unused2 + 0x13)[(long)pFVar19] == '=')))) {
        pFVar19 = (FILE *)0x0;
      }
      else {
        local_70 = (FILE *)0x8;
        pFVar11 = (FILE *)padbuf;
        pFVar19 = (FILE *)(long)(4 - ctx.i % 4);
      }
      pFVar20 = (FILE *)0x1;
    }
  } while( true );
LAB_00101040:
  pFVar15 = pFVar5;
  write_error();
  pFVar11 = local_80;
  pFVar19 = local_78;
  pFVar20 = local_88;
LAB_00100f95:
  do {
    uVar8 = pFVar20->_flags;
    pFVar10 = pFVar20;
    if (((uVar8 & 0x30) == 0) && (pFVar19 == (FILE *)0x7800)) {
LAB_00100ea7:
      pFVar19 = (FILE *)0x0;
      do {
        pFVar10 = (FILE *)0x7800;
        if ((FILE *)0x77ff < pFVar19) {
          pFVar10 = pFVar19;
        }
        lVar21 = __fread_unlocked_chk
                           ((long)&pFVar19->_flags + (long)&pFVar11->_flags,
                            (long)pFVar10 - (long)pFVar19,1,0x7800 - (long)pFVar19,pFVar20);
        pFVar19 = (FILE *)((long)&pFVar19->_flags + lVar21);
        uVar8 = pFVar20->_flags;
      } while (((uVar8 & 0x30) == 0) && ((long)pFVar19 < 0x7800));
      pFVar10 = pFVar20;
      if ((long)pFVar19 < 1) goto LAB_00100ef1;
    }
    else {
LAB_00100ef1:
      if ((__ptr != (FILE *)0x0) && (0 < (long)pFVar15)) {
        pcVar3 = pFVar12->_IO_write_ptr;
        if (pcVar3 < pFVar12->_IO_write_end) {
          pFVar12->_IO_write_ptr = pcVar3 + 1;
          *pcVar3 = '\n';
          uVar8 = pFVar10->_flags;
        }
        else {
          iVar7 = __overflow(pFVar12,10);
          pFVar5 = pFVar19;
          if (iVar7 == -1) break;
          uVar8 = pFVar10->_flags;
        }
      }
      local_70 = __ptr;
      pFVar20 = pFVar15;
      if ((uVar8 & 0x20) == 0) {
LAB_00100e71:
                    /* WARNING: Subroutine does not return */
        finish_and_exit((FILE *)pFVar10,local_68);
      }
LAB_00100f0a:
      pFVar15 = (FILE *)dcgettext(0,"read error",5);
      piVar18 = __errno_location();
      error(1,*piVar18,pFVar15);
      __ptr = local_70;
    }
    pFVar10 = (FILE *)(((long)((long)&pFVar19->_flags + 2) / 3) * 4);
    base64_encode(pFVar11,pFVar19,local_90,pFVar10);
    if (__ptr != (FILE *)0x0) {
      lVar21 = 0;
      do {
        __n = (long)pFVar10 - lVar21;
        if ((long)__ptr - (long)pFVar15 < (long)pFVar10 - lVar21) {
          __n = (long)__ptr - (long)pFVar15;
        }
        pFVar5 = pFVar15;
        local_88 = pFVar20;
        local_80 = pFVar11;
        local_78 = pFVar19;
        if (__n == 0) {
          pcVar3 = pFVar12->_IO_write_ptr;
          if (pcVar3 < pFVar12->_IO_write_end) {
            pFVar12->_IO_write_ptr = pcVar3 + 1;
            *pcVar3 = '\n';
          }
          else {
            iVar7 = __overflow(pFVar12,10);
            if (iVar7 == -1) goto LAB_00101040;
          }
          pFVar15 = (FILE *)0x0;
        }
        else {
          sVar14 = fwrite_unlocked((void *)((long)local_90 + lVar21),1,__n,_stdout);
          if (sVar14 < __n) goto LAB_00101040;
          pFVar15 = (FILE *)((long)&pFVar15->_flags + __n);
          lVar21 = lVar21 + __n;
        }
      } while (lVar21 < (long)pFVar10);
      goto LAB_00100f95;
    }
    pFVar16 = (FILE *)fwrite_unlocked(local_90,1,(size_t)pFVar10,_stdout);
    pFVar5 = pFVar19;
    local_88 = pFVar10;
  } while (pFVar10 <= pFVar16);
  goto LAB_00101040;
LAB_001010b5:
  uVar9 = quote(_optarg);
  uVar17 = dcgettext(0,"invalid wrap size",5);
  error(1,0,"%s: %s",uVar17,uVar9);
LAB_001010f2:
  uVar9 = quotearg_n_style_colon(0,3,local_68);
  piVar18 = __errno_location();
  error(1,*piVar18,&_LC2,uVar9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


