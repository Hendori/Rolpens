
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fail_output(long param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  FILE *__stream;
  uint uVar3;
  int *piVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)(param_1 + (long)param_3 * 8);
  piVar4 = __errno_location();
  uVar3 = output_error;
  __stream = (FILE *)*puVar1;
  iVar2 = *piVar4;
  if ((iVar2 == 0x20) && ((output_error & 0xfffffffd) != 1)) {
    if (__stream == _stdout) {
      clearerr_unlocked(__stream);
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    if (__stream == _stdout) {
      clearerr_unlocked(__stream);
    }
    uVar5 = quotearg_n_style_colon(0,3,*(undefined8 *)(param_2 + (long)param_3 * 8));
    error(uVar3 - 3 < 2,iVar2,&_LC0,uVar5);
    uVar5 = 1;
  }
  *puVar1 = 0;
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 tee_files(int param_1,long param_2,char param_3)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *__ptr;
  undefined8 uVar6;
  FILE *pFVar7;
  int *piVar8;
  ssize_t sVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  undefined1 local_2074;
  long local_2070;
  undefined1 *local_2068;
  undefined1 local_2048 [8200];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fadvise(_stdin,2);
  __ptr = (undefined8 *)xnmalloc((long)(param_1 + 1),8);
  if (param_3 == '\0') {
    *__ptr = _stdout;
  }
  else {
    local_2068 = (undefined1 *)xnmalloc((long)(param_1 + 1),1);
    pFVar7 = _stdout;
    *__ptr = _stdout;
    iVar12 = fileno(pFVar7);
    uVar3 = iopoll_output_ok(iVar12);
    *local_2068 = uVar3;
  }
  uVar6 = dcgettext(0,"standard output",5);
  pFVar7 = _stdout;
  *(undefined8 *)(param_2 + -8) = uVar6;
  setvbuf(pFVar7,(char *)0x0,2,0);
  if (param_1 < 1) {
    local_2074 = 1;
    local_2070 = 1;
LAB_00100276:
    sVar9 = 0;
    uVar13 = 0;
LAB_00100290:
    do {
      if (param_3 == '\0') {
LAB_001002a9:
        sVar9 = read(0,local_2048,0x2000);
        if (sVar9 < 0) {
          piVar8 = __errno_location();
          if (*piVar8 != 4) break;
          goto LAB_00100290;
        }
        if (sVar9 == 0) goto LAB_001002dd;
        if (param_1 < 0) goto LAB_00100290;
        uVar10 = 0;
LAB_001003a8:
        do {
          if ((__ptr[uVar10] != 0) && (cVar2 = fwrite_wait(local_2048,sVar9), cVar2 == '\0')) {
            cVar2 = fail_output(__ptr,param_2 + -8,uVar10 & 0xffffffff);
            if (cVar2 != '\0') {
              local_2074 = 0;
            }
            local_2070 = local_2070 + -1;
            if ((int)uVar13 == (int)uVar10) {
              iVar12 = (int)uVar13 + 1;
              if (iVar12 <= param_1) {
                uVar13 = (ulong)iVar12;
                do {
                  if (__ptr[uVar13] != 0) goto LAB_001003a0;
                  uVar13 = uVar13 + 1;
                } while ((int)uVar13 <= param_1);
              }
              uVar10 = uVar10 + 1;
              uVar13 = 0xffffffff;
              if (param_1 < (int)uVar10) break;
              goto LAB_001003a8;
            }
          }
LAB_001003a0:
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 <= param_1);
      }
      else {
        iVar12 = (int)uVar13;
        if (local_2068[iVar12] == '\0') goto LAB_001002a9;
        iVar5 = fileno((FILE *)__ptr[iVar12]);
        iVar5 = iopoll(0,iVar5,1);
        if (iVar5 != -2) {
          if (iVar5 == -3) {
            uVar6 = dcgettext(0,"iopoll error",5);
            piVar8 = __errno_location();
            error(0,*piVar8,uVar6);
            local_2074 = 0;
          }
          goto LAB_001002a9;
        }
        piVar8 = __errno_location();
        *piVar8 = 0x20;
        cVar2 = fail_output(__ptr,param_2 + -8,uVar13 & 0xffffffff);
        if (cVar2 != '\0') {
          local_2074 = 0;
        }
        local_2070 = local_2070 + -1;
        if (iVar12 + 1 <= param_1) {
          uVar13 = (ulong)(iVar12 + 1);
          do {
            if (__ptr[uVar13] != 0) goto LAB_00100423;
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 <= param_1);
        }
        uVar13 = 0xffffffff;
      }
LAB_00100423:
    } while (local_2070 != 0);
    if (sVar9 == -1) {
      uVar6 = dcgettext(0,"read error",5);
      piVar8 = __errno_location();
      error(0,*piVar8,uVar6);
      local_2074 = 0;
    }
LAB_001002dd:
    if (param_1 < 1) goto LAB_0010030f;
  }
  else {
    local_2074 = 1;
    lVar11 = 1;
    local_2070 = 1;
    do {
      while( true ) {
        pFVar7 = (FILE *)fopen_safer(*(undefined8 *)(param_2 + -8 + lVar11 * 8));
        __ptr[lVar11] = pFVar7;
        if (pFVar7 != (FILE *)0x0) break;
        if (param_3 != '\0') {
          local_2068[lVar11] = 0;
        }
        lVar1 = lVar11 * 8;
        uVar4 = output_error - 3;
        lVar11 = lVar11 + 1;
        quotearg_n_style_colon(0,3,*(undefined8 *)(param_2 + -8 + lVar1));
        piVar8 = __errno_location();
        error(uVar4 < 2,*piVar8,&_LC0);
        local_2074 = 0;
        if (param_1 < (int)lVar11) goto LAB_00100271;
      }
      if (param_3 != '\0') {
        iVar12 = fileno(pFVar7);
        uVar3 = iopoll_output_ok(iVar12);
        local_2068[lVar11] = uVar3;
      }
      setvbuf(pFVar7,(char *)0x0,2,0);
      lVar11 = lVar11 + 1;
      local_2070 = local_2070 + 1;
    } while ((int)lVar11 <= param_1);
LAB_00100271:
    if (local_2070 != 0) goto LAB_00100276;
  }
  lVar11 = 1;
  do {
    if ((__ptr[lVar11] != 0) && (cVar2 = fclose_wait(), cVar2 == '\0')) {
      uVar6 = quotearg_n_style_colon(0,3,*(undefined8 *)(param_2 + -8 + lVar11 * 8));
      piVar8 = __errno_location();
      error(0,*piVar8,&_LC0,uVar6);
      local_2074 = 0;
    }
    lVar11 = lVar11 + 1;
  } while ((int)lVar11 <= param_1);
LAB_0010030f:
  free(__ptr);
  if (param_3 != '\0') {
    free(local_2068);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_2074;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  local_a8 = &_LC6;
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
    iVar2 = strcmp("tee",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
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
  exit(param_1);
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  uint uVar9;
  
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  append = 0;
  ignore_interrupts = '\0';
LAB_00101080:
  do {
    uVar4 = getopt_long(param_1,param_2,&_LC37,long_options,0);
    iVar3 = (int)uVar4;
    if (iVar3 == -1) break;
    if (iVar3 != 0x61) {
      if (iVar3 < 0x62) {
        if (iVar3 == -0x83) {
          uVar4 = proper_name_lite("David MacKenzie","David MacKenzie");
          uVar6 = proper_name_lite("Richard M. Stallman","Richard M. Stallman");
          uVar7 = proper_name_lite("Mike Parker","Mike Parker");
          version_etc(_stdout,&_LC7,"GNU coreutils",_Version,uVar7,uVar6,uVar4,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar3 == -0x82) {
          usage(0);
        }
      }
      else {
        if (iVar3 == 0x69) {
          ignore_interrupts = '\x01';
          goto LAB_00101080;
        }
        if (iVar3 == 0x70) {
          if (_optarg == 0) {
            output_error = 2;
          }
          else {
            lVar5 = __xargmatch_internal
                              ("--output-error",_optarg,output_error_args,output_error_types,4,
                               _argmatch_die,1,uVar4);
            output_error = *(int *)(output_error_types + lVar5 * 4);
          }
          goto LAB_00101080;
        }
      }
      usage(1);
      goto LAB_00101248;
    }
    append = 1;
  } while( true );
  if (ignore_interrupts != '\0') {
    signal(2,(__sighandler_t)0x1);
  }
  if (output_error != 0) {
    uVar9 = output_error - 2;
    signal(0xd,(__sighandler_t)0x1);
    if ((uVar9 & 0xfffffffd) == 0) {
      uVar2 = iopoll_input_ok(0);
      goto LAB_001011ca;
    }
  }
  uVar2 = 0;
LAB_001011ca:
  bVar1 = tee_files(param_1 - _optind,param_2 + _optind,uVar2);
  iVar3 = close(0);
  if (iVar3 == 0) {
    return bVar1 ^ 1;
  }
LAB_00101248:
  uVar4 = dcgettext(0,"standard input",5);
  piVar8 = __errno_location();
  error(1,*piVar8,&_LC0,uVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


