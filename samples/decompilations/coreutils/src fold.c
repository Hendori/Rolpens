
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

_Bool fold_file(char *filename,size_t width)

{
  size_t sVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  _IO_FILE *__stream;
  byte *pbVar6;
  ulong uVar7;
  uint *puVar8;
  ushort **ppuVar9;
  undefined8 uVar10;
  int *piVar11;
  char *pcVar12;
  ulong uVar13;
  char cVar14;
  size_t __n;
  char *pcVar15;
  size_t __n_00;
  
  if ((*filename == '-') && (filename[1] == '\0')) {
    have_read_stdin = true;
    __stream = _stdin;
  }
  else {
    __stream = (_IO_FILE *)rpl_fopen(filename,&_LC0);
  }
  if (__stream == (_IO_FILE *)0x0) {
    uVar10 = quotearg_n_style_colon(0,3,filename);
    piVar11 = __errno_location();
    error(0,*piVar11,&_LC1,uVar10);
    return false;
  }
  __n_00 = 0;
  uVar13 = 0;
  fadvise(__stream,2);
LAB_00100050:
  pbVar6 = (byte *)__stream->_IO_read_ptr;
  if (__stream->_IO_read_end <= pbVar6) goto LAB_0010010f;
LAB_0010005e:
  __stream->_IO_read_ptr = (char *)(pbVar6 + 1);
  uVar4 = (uint)*pbVar6;
LAB_00100069:
  if ((long)(fold_file::allocated_out - __n_00) < 2) {
    fold_file::line_out =
         (char *)xpalloc(fold_file::line_out,&fold_file::allocated_out,1,0xffffffffffffffff,1);
  }
  pcVar15 = fold_file::line_out;
  if (uVar4 != 10) {
    cVar14 = (char)uVar4;
    do {
      if (count_bytes != false) goto LAB_00100195;
LAB_001000a1:
      if (cVar14 == '\b') goto LAB_00100388;
joined_r0x001000b5:
      if (cVar14 == '\r') {
        uVar13 = 0;
        pcVar15[__n_00] = '\r';
        __n_00 = __n_00 + 1;
        goto LAB_00100050;
      }
      uVar7 = uVar13 & 0xfffffffffffffff8;
      uVar13 = uVar13 + 1;
      if (cVar14 == '\t') {
        uVar13 = uVar7 + 8;
      }
joined_r0x001000d7:
      if (uVar13 <= width) {
LAB_001001a4:
        pcVar15[__n_00] = cVar14;
        __n_00 = __n_00 + 1;
        goto LAB_00100050;
      }
      sVar1 = __n_00;
      if (break_spaces == false) {
LAB_001000ea:
        if (__n_00 == 0) {
          __n_00 = 1;
          *pcVar15 = cVar14;
          pbVar6 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar6) goto LAB_0010010f;
          goto LAB_0010005e;
        }
        pcVar15[__n_00] = '\n';
        fwrite_unlocked(pcVar15,1,__n_00 + 1,_stdout);
        pcVar15 = fold_file::line_out;
        if (count_bytes != false) {
          __n_00 = 0;
LAB_00100193:
          uVar13 = 0;
LAB_00100195:
          uVar13 = uVar13 + 1;
          goto joined_r0x001000d7;
        }
        __n_00 = 0;
joined_r0x00100429:
        uVar13 = 0;
        if (cVar14 == '\b') goto LAB_001001a4;
        goto joined_r0x001000b5;
      }
      do {
        __n = sVar1;
        if (__n == 0) goto LAB_001000ea;
        ppuVar9 = __ctype_b_loc();
        sVar1 = __n - 1;
      } while (((*ppuVar9)[(byte)pcVar15[__n - 1]] & 1) == 0);
      fwrite_unlocked(pcVar15,1,__n,_stdout);
      pcVar15 = _stdout->_IO_write_ptr;
      if (pcVar15 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar15 + 1;
        *pcVar15 = '\n';
      }
      else {
        __overflow(_stdout,10);
      }
      pcVar15 = fold_file::line_out;
      __n_00 = __n_00 - __n;
      memmove(fold_file::line_out,fold_file::line_out + __n,__n_00);
      if ((long)__n_00 < 1) {
        if (count_bytes == false) goto joined_r0x00100429;
        goto LAB_00100193;
      }
      pcVar2 = pcVar15 + __n_00;
      uVar13 = 0;
      pcVar12 = pcVar15;
      if (count_bytes == false) {
        do {
          while( true ) {
            cVar3 = *pcVar12;
            while (cVar3 != '\b') {
              if (cVar3 == '\r') {
                uVar13 = 0;
                goto joined_r0x001003d9;
              }
              if (cVar3 == '\t') {
                uVar13 = (uVar13 & 0xfffffffffffffff8) + 8;
                goto joined_r0x001003d9;
              }
              pcVar12 = pcVar12 + 1;
              uVar13 = uVar13 + 1;
              if (pcVar2 == pcVar12) goto LAB_001000a1;
              cVar3 = *pcVar12;
            }
            if (uVar13 != 0) break;
joined_r0x001003d9:
            pcVar12 = pcVar12 + 1;
            if (pcVar2 == pcVar12) goto LAB_001000a1;
          }
          pcVar12 = pcVar12 + 1;
          uVar13 = uVar13 - 1;
        } while (pcVar2 != pcVar12);
        if (cVar14 != '\b') goto joined_r0x001000b5;
LAB_00100388:
        if (uVar13 == 0) goto LAB_001001a4;
        uVar13 = uVar13 - 1;
        goto joined_r0x001000d7;
      }
      if (((int)pcVar2 - (int)pcVar15 & 1U) == 0) goto LAB_00100310;
      uVar13 = 1;
      for (pcVar12 = pcVar15 + 1; pcVar2 != pcVar12; pcVar12 = pcVar12 + 2) {
LAB_00100310:
        uVar13 = uVar13 + 2;
      }
    } while( true );
  }
  fold_file::line_out[__n_00] = '\n';
  sVar1 = __n_00 + 1;
  uVar13 = 0;
  __n_00 = 0;
  fwrite_unlocked(pcVar15,1,sVar1,_stdout);
  goto LAB_00100050;
LAB_0010010f:
  uVar4 = __uflow(__stream);
  if (uVar4 != 0xffffffff) goto LAB_00100069;
  puVar8 = (uint *)__errno_location();
  uVar4 = __stream->_flags & 0x20;
  if (uVar4 != 0) {
    uVar4 = *puVar8;
  }
  if (__n_00 != 0) {
    fwrite_unlocked(fold_file::line_out,1,__n_00,_stdout);
  }
  if ((*filename == '-') && (filename[1] == '\0')) {
    clearerr_unlocked(__stream);
  }
  else {
    iVar5 = rpl_fclose();
    if (iVar5 != 0) {
      if (uVar4 != 0) goto LAB_00100443;
      uVar4 = *puVar8;
    }
  }
  if (uVar4 == 0) {
    return true;
  }
LAB_00100443:
  uVar10 = quotearg_n_style_colon(0,3,filename);
  error(0,uVar4,&_LC1,uVar10);
  return false;
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
    goto LAB_0010050a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Wrap input lines in each FILE, writing to standard output.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -b, --bytes         count bytes rather than columns\n  -s, --spaces        break at spaces\n  -w, --width=WIDTH   use WIDTH columns instead of 80\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
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
    iVar2 = strcmp("fold",pcVar4);
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
    if (pcVar4 != (char *)0x0) goto LAB_0010073d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC3);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_0010073d:
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
LAB_0010050a:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long lVar1;
  char *filename;
  _Bool _Var2;
  _Bool _Var3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  uint uVar8;
  size_t width;
  char **ppcVar9;
  long in_FS_OFFSET;
  char optargbuf [2];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  width = 0x50;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  have_read_stdin = false;
  count_bytes = false;
  break_spaces = false;
LAB_00100d0a:
  do {
    iVar4 = getopt_long(argc,argv,"bsw:0::1::2::3::4::5::6::7::8::9::",longopts,0);
    if (iVar4 == -1) break;
    if (iVar4 != 0x62) {
      if (iVar4 < 99) {
        if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        if (iVar4 < -0x81) {
          if (iVar4 == -0x83) {
            uVar5 = proper_name_lite("David MacKenzie","David MacKenzie");
            version_etc(_stdout,&_LC3,"GNU coreutils",_Version,uVar5,0);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
LAB_00100f0a:
                    /* WARNING: Subroutine does not return */
          usage(1);
        }
        if (9 < iVar4 - 0x30U) goto LAB_00100f0a;
        if (_optarg == (char *)0x0) {
          optargbuf[0] = (char)iVar4;
          _optarg = optargbuf;
          optargbuf[1] = '\0';
        }
        else {
          _optarg = _optarg + -1;
        }
      }
      else {
        if (iVar4 == 0x73) {
          break_spaces = true;
          goto LAB_00100d0a;
        }
        if (iVar4 != 0x77) goto LAB_00100f0a;
      }
      uVar5 = dcgettext(0,"invalid number of columns",5);
      width = xnumtoumax(_optarg,10,1,0xfffffffffffffff6,&_LC5,uVar5,0,0xc);
      goto LAB_00100d0a;
    }
    count_bytes = true;
  } while( true );
  if (_optind == argc) goto LAB_00100ef0;
  if (_optind < argc) {
    lVar7 = (long)_optind;
    uVar8 = argc - _optind;
    ppcVar9 = argv + lVar7;
    _Var3 = true;
    do {
      filename = *ppcVar9;
      ppcVar9 = ppcVar9 + 1;
      _Var2 = fold_file(filename,width);
      _Var3 = (_Bool)(_Var3 & _Var2);
    } while (ppcVar9 != argv + (ulong)uVar8 + lVar7);
  }
  else {
    _Var3 = true;
  }
  while (have_read_stdin != false) {
    iVar4 = rpl_fclose(_stdin);
    if (iVar4 != -1) break;
    piVar6 = __errno_location();
    error(1,*piVar6,&_LC32);
LAB_00100ef0:
    _Var3 = fold_file("-",width);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)(_Var3 ^ 1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


