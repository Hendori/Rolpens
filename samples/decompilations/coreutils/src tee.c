
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

_Bool fail_output(FILE **descriptors,char **files,int i)

{
  int iVar1;
  FILE *__stream;
  output_error oVar2;
  _Bool _Var3;
  int *piVar4;
  undefined8 uVar5;
  
  piVar4 = __errno_location();
  oVar2 = output_error;
  __stream = (FILE *)descriptors[i];
  iVar1 = *piVar4;
  if ((iVar1 == 0x20) && ((output_error & ~output_error_warn_nopipe) != output_error_warn)) {
    if (__stream == _stdout) {
      clearerr_unlocked(__stream);
      _Var3 = false;
    }
    else {
      _Var3 = false;
    }
  }
  else {
    if (__stream == _stdout) {
      clearerr_unlocked(__stream);
    }
    uVar5 = quotearg_n_style_colon(0,3,files[i]);
    error(oVar2 - output_error_exit < 2,iVar1,&_LC0,uVar5);
    _Var3 = true;
  }
  descriptors[i] = (FILE *)0x0;
  return _Var3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

_Bool tee_files(int nfiles,char **files,_Bool pipe_check)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  _Bool _Var4;
  uint uVar5;
  int iVar6;
  FILE **descriptors;
  char *pcVar7;
  FILE *pFVar8;
  int *piVar9;
  ssize_t sVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long in_FS_OFFSET;
  _Bool local_2074;
  long local_2070;
  undefined1 *local_2068;
  char buffer [8192];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  fadvise(_stdin,2);
  descriptors = (FILE **)xnmalloc((long)(nfiles + 1),8);
  if (pipe_check) {
    local_2068 = (undefined1 *)xnmalloc((long)(nfiles + 1),1);
    pFVar8 = _stdout;
    *descriptors = (FILE *)_stdout;
    iVar14 = fileno(pFVar8);
    uVar3 = iopoll_output_ok(iVar14);
    *local_2068 = uVar3;
  }
  else {
    *descriptors = (FILE *)_stdout;
  }
  pcVar7 = (char *)dcgettext(0,"standard output",5);
  pFVar8 = _stdout;
  files[-1] = pcVar7;
  setvbuf(pFVar8,(char *)0x0,2,0);
  if (nfiles < 1) {
    local_2074 = true;
    local_2070 = 1;
LAB_00100276:
    sVar10 = 0;
    lVar13 = 0;
LAB_00100290:
    do {
      if (pipe_check) {
        iVar14 = (int)lVar13;
        if (local_2068[iVar14] == '\0') goto LAB_001002a9;
        iVar6 = fileno((FILE *)descriptors[iVar14]);
        iVar6 = iopoll(0,iVar6,1);
        if (iVar6 != -2) {
          if (iVar6 == -3) {
            uVar11 = dcgettext(0,"iopoll error",5);
            piVar9 = __errno_location();
            error(0,*piVar9,uVar11);
            local_2074 = false;
          }
          goto LAB_001002a9;
        }
        piVar9 = __errno_location();
        *piVar9 = 0x20;
        _Var4 = fail_output(descriptors,files + -1,iVar14);
        if (_Var4) {
          local_2074 = false;
        }
        local_2070 = local_2070 + -1;
        if (iVar14 + 1 <= nfiles) {
          lVar13 = (long)(iVar14 + 1);
          do {
            if (descriptors[lVar13] != (FILE *)0x0) goto LAB_00100423;
            lVar13 = lVar13 + 1;
          } while ((int)lVar13 <= nfiles);
        }
        lVar13 = 0xffffffff;
      }
      else {
LAB_001002a9:
        sVar10 = read(0,buffer,0x2000);
        if (sVar10 < 0) {
          piVar9 = __errno_location();
          if (*piVar9 != 4) break;
          goto LAB_00100290;
        }
        if (sVar10 == 0) goto LAB_001002dd;
        if (nfiles < 0) goto LAB_00100290;
        lVar12 = 0;
LAB_001003a8:
        do {
          if ((descriptors[lVar12] != (FILE *)0x0) &&
             (cVar2 = fwrite_wait(buffer,sVar10), cVar2 == '\0')) {
            _Var4 = fail_output(descriptors,files + -1,(int)lVar12);
            if (_Var4) {
              local_2074 = false;
            }
            local_2070 = local_2070 + -1;
            if ((int)lVar13 == (int)lVar12) {
              iVar14 = (int)lVar13 + 1;
              if (iVar14 <= nfiles) {
                lVar13 = (long)iVar14;
                do {
                  if (descriptors[lVar13] != (FILE *)0x0) goto LAB_001003a0;
                  lVar13 = lVar13 + 1;
                } while ((int)lVar13 <= nfiles);
              }
              lVar12 = lVar12 + 1;
              lVar13 = 0xffffffff;
              if (nfiles < (int)lVar12) break;
              goto LAB_001003a8;
            }
          }
LAB_001003a0:
          lVar12 = lVar12 + 1;
        } while ((int)lVar12 <= nfiles);
      }
LAB_00100423:
    } while (local_2070 != 0);
    if (sVar10 == -1) {
      uVar11 = dcgettext(0,"read error",5);
      piVar9 = __errno_location();
      error(0,*piVar9,uVar11);
      local_2074 = false;
    }
LAB_001002dd:
    if (nfiles < 1) goto LAB_0010030f;
  }
  else {
    local_2074 = true;
    lVar13 = 1;
    local_2070 = 1;
    do {
      while( true ) {
        pFVar8 = (FILE *)fopen_safer(files[lVar13 + -1]);
        descriptors[lVar13] = (FILE *)pFVar8;
        if (pFVar8 != (FILE *)0x0) break;
        if (pipe_check) {
          local_2068[lVar13] = 0;
        }
        lVar12 = lVar13 + -1;
        uVar5 = output_error - output_error_exit;
        lVar13 = lVar13 + 1;
        quotearg_n_style_colon(0,3,files[lVar12]);
        piVar9 = __errno_location();
        error(uVar5 < 2,*piVar9,&_LC0);
        local_2074 = false;
        if (nfiles < (int)lVar13) goto LAB_00100271;
      }
      if (pipe_check) {
        iVar14 = fileno(pFVar8);
        uVar3 = iopoll_output_ok(iVar14);
        local_2068[lVar13] = uVar3;
      }
      setvbuf(pFVar8,(char *)0x0,2,0);
      lVar13 = lVar13 + 1;
      local_2070 = local_2070 + 1;
    } while ((int)lVar13 <= nfiles);
LAB_00100271:
    if (local_2070 != 0) goto LAB_00100276;
  }
  lVar13 = 1;
  do {
    if ((descriptors[lVar13] != (FILE *)0x0) && (cVar2 = fclose_wait(), cVar2 == '\0')) {
      uVar11 = quotearg_n_style_colon(0,3,files[lVar13 + -1]);
      piVar9 = __errno_location();
      error(0,*piVar9,&_LC0,uVar11);
      local_2074 = false;
    }
    lVar13 = lVar13 + 1;
  } while ((int)lVar13 <= nfiles);
LAB_0010030f:
  free(descriptors);
  if (pipe_check) {
    free(local_2068);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_2074;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    goto LAB_0010061a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Copy standard input to each FILE, and also to standard output.\n\n  -a, --append              append to the given FILEs, do not overwrite\n  -i, --ignore-interrupts   ignore interrupt signals\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -p                        operate in a more appropriate MODE with pipes\n      --output-error[=MODE]   set behavior on write error.  See MODE below\n"
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
                             "\nMODE determines behavior with write errors on the outputs:\n  warn           diagnose errors writing to any output\n  warn-nopipe    diagnose errors writing to any output not a pipe\n  exit           exit on error writing to any output\n  exit-nopipe    exit on error writing to any output not a pipe\nThe default MODE for the -p option is \'warn-nopipe\'.\nWith \"nopipe\" MODEs, exit immediately if all outputs become broken pipes.\nThe default operation when --output-error is not specified, is to\nexit immediately on error writing to a pipe, and diagnose errors\nwriting to non pipe outputs.\n"
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
    iVar2 = strcmp("tee",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)piVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC7;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_00100825;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC7);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00100825:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC7);
    if (puVar7 == &_LC7) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_0010061a:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  _Bool _Var1;
  undefined1 pipe_check;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  uint uVar8;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  append = false;
  ignore_interrupts = false;
LAB_00101080:
  do {
    uVar3 = getopt_long(argc,argv,&_LC37,long_options,0);
    iVar2 = (int)uVar3;
    if (iVar2 == -1) break;
    if (iVar2 != 0x61) {
      if (iVar2 < 0x62) {
        if (iVar2 == -0x83) {
          uVar3 = proper_name_lite("David MacKenzie","David MacKenzie");
          uVar5 = proper_name_lite("Richard M. Stallman","Richard M. Stallman");
          uVar6 = proper_name_lite("Mike Parker","Mike Parker");
          version_etc(_stdout,&_LC7,"GNU coreutils",_Version,uVar6,uVar5,uVar3,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar2 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
      }
      else {
        if (iVar2 == 0x69) {
          ignore_interrupts = true;
          goto LAB_00101080;
        }
        if (iVar2 == 0x70) {
          if (_optarg == 0) {
            output_error = output_error_warn_nopipe;
          }
          else {
            lVar4 = __xargmatch_internal
                              ("--output-error",_optarg,output_error_args,output_error_types,4,
                               _argmatch_die,1,uVar3);
            output_error = output_error_types[lVar4];
          }
          goto LAB_00101080;
        }
      }
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    append = true;
  } while( true );
  if (ignore_interrupts != false) {
    signal(2,(__sighandler_t)0x1);
  }
  if (output_error != output_error_sigpipe) {
    uVar8 = output_error - output_error_warn_nopipe;
    signal(0xd,(__sighandler_t)0x1);
    if ((uVar8 & 0xfffffffd) == 0) {
      pipe_check = iopoll_input_ok(0);
      goto LAB_001011ca;
    }
  }
  pipe_check = false;
LAB_001011ca:
  _Var1 = tee_files(argc - _optind,argv + _optind,(_Bool)pipe_check);
  iVar2 = close(0);
  if (iVar2 == 0) {
    return (int)!_Var1;
  }
  uVar3 = dcgettext(0,"standard input",5);
  piVar7 = __errno_location();
  error(1,*piVar7,&_LC0,uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


