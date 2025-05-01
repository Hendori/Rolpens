
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
    iVar2 = strcmp("base32",pcVar5);
    if (iVar2 == 0) break;
    pcVar5 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar5 != (char *)0x0);
  pcVar5 = *(char **)((long)piVar7 + 8);
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
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  FILE *pFVar9;
  FILE *pFVar10;
  FILE *pFVar11;
  size_t sVar12;
  FILE *pFVar13;
  FILE *pFVar14;
  FILE *pFVar15;
  undefined8 uVar16;
  int *piVar17;
  ulong __n;
  FILE *pFVar18;
  FILE *pFVar19;
  long lVar20;
  void *local_98;
  FILE *local_90;
  FILE *local_88;
  FILE *local_80;
  FILE *local_78;
  char *local_70;
  intmax_t w;
  base32_decode_context ctx;
  char padbuf [8];
  
  bVar4 = false;
  pFVar13 = (FILE *)(ulong)(uint)argc;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_98 = (void *)((ulong)local_98 & 0xffffffffffffff00);
  pFVar18 = (FILE *)0x4c;
  while (iVar6 = getopt_long(pFVar13,argv,&_LC36,long_options,0), iVar6 != -1) {
    if (iVar6 == 100) {
      bVar4 = true;
    }
    else {
      if (iVar6 < 0x65) {
        if (iVar6 == -0x83) {
          uVar8 = proper_name_lite("Simon Josefsson","Simon Josefsson");
          version_etc(_stdout,"base32","GNU coreutils",_Version,uVar8,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar6 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        goto LAB_00100c35;
      }
      if (iVar6 == 0x69) {
        local_98 = (void *)CONCAT71(local_98._1_7_,1);
      }
      else {
        if (iVar6 != 0x77) goto LAB_00100c35;
        uVar7 = xstrtoimax(_optarg,0,10,&w);
        if ((1 < uVar7) || (w < 0)) goto LAB_001010f9;
        pFVar18 = (FILE *)w;
        if (uVar7 == 1) {
          pFVar18 = (FILE *)0x0;
        }
      }
    }
  }
  if (1 < argc - _optind) {
    uVar8 = quote(argv[(long)_optind + 1]);
    uVar16 = dcgettext(0,"extra operand %s",5);
    error(0,0,uVar16,uVar8);
LAB_00100c35:
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  if (_optind < argc) {
    local_70 = argv[_optind];
    iVar6 = strcmp(local_70,"-");
    pFVar9 = _stdin;
    if ((iVar6 != 0) && (pFVar9 = (FILE *)rpl_fopen(local_70,&_LC38), pFVar9 == (FILE *)0x0))
    goto LAB_00101136;
  }
  else {
    local_70 = "-";
    pFVar9 = _stdin;
  }
  fadvise(pFVar9,2);
  pFVar5 = _stdout;
  if (!bVar4) {
    pFVar14 = (FILE *)0x0;
    pFVar13 = (FILE *)xmalloc(0x7800);
    local_98 = (void *)xmalloc(0xc000);
    pFVar10 = pFVar5;
    pFVar19 = pFVar9;
    goto LAB_00100ed0;
  }
  local_78 = (FILE *)0x2000;
  builtin_strncpy(padbuf,"========",8);
  pFVar10 = (FILE *)xmalloc(0x2000);
  local_90 = (FILE *)xmalloc(0x1400);
  ctx.i = 0;
  do {
    pFVar19 = (FILE *)0x0;
    do {
      pFVar18 = pFVar19;
      if (pFVar19 <= local_78) {
        pFVar18 = local_78;
      }
      pFVar11 = (FILE *)__fread_unlocked_chk
                                  ((long)&pFVar19->_flags + (long)&pFVar10->_flags,
                                   (long)pFVar18 - (long)pFVar19,1,0x2000 - (long)pFVar19,pFVar9);
      if (((char)local_98 != '\0') && (0 < (long)pFVar11)) {
        pFVar13 = (FILE *)0x0;
        do {
          pFVar18 = (FILE *)((long)&pFVar13->_flags + (long)&pFVar19->_flags);
          pbVar1 = (byte *)((long)&pFVar18->_flags + (long)&pFVar10->_flags);
          bVar2 = *pbVar1;
          if (((char)(&base32_to_int)[bVar2] < '\0') && (bVar2 != 0x3d)) {
            pFVar11 = (FILE *)(pFVar11[-1]._unused2 + 0x13);
            pFVar14 = pFVar18;
            if (pFVar18 <= local_78) {
              pFVar14 = local_78;
            }
            __memmove_chk(pbVar1,(undefined1 *)((long)&pFVar10->_flags + 1) + (long)pFVar18,
                          (long)pFVar11 - (long)pFVar13,(long)pFVar14 - (long)pFVar18);
          }
          else {
            pFVar13 = (FILE *)((long)&pFVar13->_flags + 1);
          }
          pFVar18 = (FILE *)0x0;
          if (-1 < (long)pFVar13) {
            pFVar18 = pFVar13;
          }
        } while ((long)pFVar18 < (long)pFVar11);
      }
      pFVar19 = (FILE *)((long)&pFVar11->_flags + (long)&pFVar19->_flags);
      pFVar18 = local_78;
      local_88 = pFVar5;
      if ((pFVar9->_flags & 0x20U) != 0) goto LAB_00100f32;
    } while (((long)pFVar19 < 0x2000) && ((pFVar9->_flags & 0x10U) == 0));
    pFVar18 = (FILE *)0x0;
    local_80 = (FILE *)&ctx;
    while( true ) {
      w = 0x1400;
      uVar7 = base32_decode_ctx(local_80,pFVar10,pFVar19,local_90,(FILE *)&w);
      pFVar13 = (FILE *)(ulong)uVar7;
      sVar12 = fwrite_unlocked(local_90,1,w,pFVar5);
      local_88 = (FILE *)&w;
      if (sVar12 < (ulong)w) goto LAB_00101065;
      if ((char)uVar7 == '\0') {
        uVar8 = dcgettext(0,"invalid input",5);
        error(1,0,uVar8);
        goto LAB_001010f9;
      }
      if ((pFVar9->_flags & 0x10) == 0) break;
      if (((int)pFVar18 != 0) || (ctx.i == 0)) goto LAB_00100e9b;
      if ((ctx.i & 7U) == 0) {
LAB_00100e7f:
        pFVar13 = (FILE *)0x0;
      }
      else {
        iVar6 = 8 - ctx.i % 8;
        pFVar13 = (FILE *)(long)iVar6;
        if ((pFVar19 != (FILE *)0x0) && ((pFVar10[-1]._unused2 + 0x13)[(long)pFVar19] == '='))
        goto LAB_00100e7f;
        if (8 < iVar6) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("auto_padding <= sizeof (padbuf)","src/basenc.c",0x4a7,"do_decode");
        }
        local_78 = (FILE *)0x8;
        pFVar10 = (FILE *)padbuf;
      }
      pFVar18 = (FILE *)0x1;
      pFVar19 = pFVar13;
    }
  } while( true );
LAB_00101065:
  pFVar14 = pFVar5;
  write_error();
  pFVar13 = local_88;
  pFVar11 = local_80;
  pFVar19 = local_90;
LAB_00100fbb:
  do {
    uVar7 = pFVar19->_flags;
    pFVar9 = pFVar19;
    if (((uVar7 & 0x30) == 0) && (pFVar11 == (FILE *)0x7800)) {
LAB_00100ed0:
      pFVar11 = (FILE *)0x0;
      do {
        pFVar9 = (FILE *)0x7800;
        if ((FILE *)0x77ff < pFVar11) {
          pFVar9 = pFVar11;
        }
        lVar20 = __fread_unlocked_chk
                           ((long)&pFVar11->_flags + (long)&pFVar13->_flags,
                            (long)pFVar9 - (long)pFVar11,1,0x7800 - (long)pFVar11,pFVar19);
        pFVar11 = (FILE *)((long)&pFVar11->_flags + lVar20);
        uVar7 = pFVar19->_flags;
      } while (((uVar7 & 0x30) == 0) && ((long)pFVar11 < 0x7800));
      pFVar9 = pFVar19;
      if ((long)pFVar11 < 1) goto LAB_00100f19;
    }
    else {
LAB_00100f19:
      if ((pFVar18 != (FILE *)0x0) && (0 < (long)pFVar14)) {
        pcVar3 = pFVar10->_IO_write_ptr;
        if (pcVar3 < pFVar10->_IO_write_end) {
          pFVar10->_IO_write_ptr = pcVar3 + 1;
          *pcVar3 = '\n';
          uVar7 = pFVar9->_flags;
        }
        else {
          iVar6 = __overflow(pFVar10,10);
          pFVar5 = pFVar11;
          if (iVar6 == -1) break;
          uVar7 = pFVar9->_flags;
        }
      }
      pFVar19 = pFVar14;
      if ((uVar7 & 0x20) == 0) {
LAB_00100e9b:
                    /* WARNING: Subroutine does not return */
        finish_and_exit((FILE *)pFVar9,local_70);
      }
LAB_00100f32:
      pFVar14 = (FILE *)dcgettext(0,"read error",5);
      piVar17 = __errno_location();
      error(1,*piVar17,pFVar14);
    }
    pFVar9 = (FILE *)(((long)&pFVar11->field_0x4 / 5) * 8);
    base32_encode(pFVar13,pFVar11,local_98,pFVar9);
    if (pFVar18 != (FILE *)0x0) {
      lVar20 = 0;
      do {
        __n = (long)pFVar9 - lVar20;
        if ((long)pFVar18 - (long)pFVar14 < (long)pFVar9 - lVar20) {
          __n = (long)pFVar18 - (long)pFVar14;
        }
        pFVar5 = pFVar14;
        local_90 = pFVar19;
        local_88 = pFVar13;
        local_80 = pFVar11;
        if (__n == 0) {
          pcVar3 = pFVar10->_IO_write_ptr;
          if (pcVar3 < pFVar10->_IO_write_end) {
            pFVar10->_IO_write_ptr = pcVar3 + 1;
            *pcVar3 = '\n';
          }
          else {
            iVar6 = __overflow(pFVar10,10);
            if (iVar6 == -1) goto LAB_00101065;
          }
          pFVar14 = (FILE *)0x0;
        }
        else {
          sVar12 = fwrite_unlocked((void *)((long)local_98 + lVar20),1,__n,_stdout);
          if (sVar12 < __n) goto LAB_00101065;
          pFVar14 = (FILE *)((long)&pFVar14->_flags + __n);
          lVar20 = lVar20 + __n;
        }
      } while (lVar20 < (long)pFVar9);
      goto LAB_00100fbb;
    }
    pFVar15 = (FILE *)fwrite_unlocked(local_98,1,(size_t)pFVar9,_stdout);
    pFVar5 = pFVar11;
    local_90 = pFVar9;
  } while (pFVar9 <= pFVar15);
  goto LAB_00101065;
LAB_001010f9:
  uVar8 = quote(_optarg);
  uVar16 = dcgettext(0,"invalid wrap size",5);
  error(1,0,"%s: %s",uVar16,uVar8);
LAB_00101136:
  uVar8 = quotearg_n_style_colon(0,3,local_70);
  piVar17 = __errno_location();
  error(1,*piVar17,&_LC2,uVar8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


