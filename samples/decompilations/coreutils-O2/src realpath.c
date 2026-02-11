
bool path_prefix(long param_1,long param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\0') {
    return *(char *)(param_2 + 1) != '/';
  }
  if ((cVar1 == '/') && (*(char *)(param_1 + 2) == '\0')) {
    return *(char *)(param_2 + 1) == '/';
  }
  param_1 = param_1 + 1;
  pcVar2 = (char *)(param_2 + 1);
  while ((*pcVar2 != '\0' && (*pcVar2 == cVar1))) {
    cVar1 = *(char *)(param_1 + 1);
    param_1 = param_1 + 1;
    pcVar2 = pcVar2 + 1;
    if (cVar1 == '\0') {
      return *pcVar2 == '/' || *pcVar2 == '\0';
    }
  }
  return false;
}



void * realpath_canon(undefined8 param_1,uint param_2)

{
  void *__ptr;
  void *pvVar1;
  
  __ptr = (void *)canonicalize_filename_mode();
  pvVar1 = __ptr;
  if ((logical != '\0') && (__ptr != (void *)0x0)) {
    pvVar1 = (void *)canonicalize_filename_mode(__ptr,param_2 & 0xfffffffb);
    free(__ptr);
  }
  return pvVar1;
}



undefined4 isdir(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  long in_FS_OFFSET;
  stat sStack_b8;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = stat(param_1,&sStack_b8);
  if (iVar1 == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return CONCAT31((int3)((sStack_b8.st_mode & 0xf000) >> 8),
                      (sStack_b8.st_mode & 0xf000) == 0x4000);
    }
  }
  else {
    uVar2 = quotearg_style(4,param_1);
    uVar3 = dcgettext(0,"cannot stat %s",5);
    piVar4 = __errno_location();
    error(1,*piVar4,uVar3,uVar2);
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
  
  uVar5 = _program_name;
  ppuVar7 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_001001ca;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... FILE...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Print the resolved absolute file name;\nall but the last component must exist\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -e, --canonicalize-existing  all components of the path must exist\n  -m, --canonicalize-missing   no path components need exist or be a directory\n  -L, --logical                resolve \'..\' components before symlinks\n  -P, --physical               resolve symlinks as encountered (default)\n  -q, --quiet                  suppress most error messages\n      --relative-to=DIR        print the resolved path relative to DIR\n      --relative-base=DIR      print absolute paths unless paths below DIR\n  -s, --strip, --no-symlinks   don\'t expand symlinks\n  -z, --zero                   end each output line with NUL, not newline\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC1;
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
    iVar2 = strcmp("realpath",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "realpath";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_001003ad;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","realpath");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_001003ad:
      iVar2 = strncmp(pcVar6,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar6 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar6,pFVar1);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","realpath");
    if (pcVar4 == "realpath") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_001001ca:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong extraout_RDX;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  char *pcVar10;
  ulong local_48;
  ulong local_40;
  
  pcVar10 = "eLmPqsz";
  puVar9 = &switchD_00100b94::switchdataD_00100f90;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  uVar8 = 1;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_48 = 0;
  local_40 = 0;
  while (iVar2 = getopt_long(param_1,param_2,"eLmPqsz",longopts,0), iVar2 != -1) {
    if (0x81 < iVar2) goto switchD_00100b94_caseD_4d;
    if (iVar2 < 0x4c) {
      if (iVar2 == -0x83) {
        uVar4 = proper_name_lite("Padraig Brady",&_LC28);
        version_etc(_stdout,"realpath","GNU coreutils",_Version,uVar4,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar2 == -0x82) {
        usage(0);
        goto LAB_00100f2d;
      }
      goto switchD_00100b94_caseD_4d;
    }
    switch(iVar2) {
    case 0x4c:
      logical = '\x01';
      uVar8 = uVar8 | 4;
      break;
    default:
      goto switchD_00100b94_caseD_4d;
    case 0x50:
      logical = '\0';
      uVar8 = uVar8 & 0xfffffffb;
      break;
    case 0x65:
      uVar8 = uVar8 & 0xfffffffc;
      break;
    case 0x6d:
      uVar8 = uVar8 & 0xfffffffc | 2;
      break;
    case 0x71:
      verbose = '\0';
      break;
    case 0x73:
      logical = '\0';
      uVar8 = uVar8 | 4;
      break;
    case 0x7a:
      use_nuls = '\x01';
      break;
    case 0x80:
      local_40 = _optarg;
      break;
    case 0x81:
      local_48 = _optarg;
    }
  }
  if (_optind < param_1) {
    uVar7 = uVar8 & 3;
    puVar9 = (uint *)(ulong)uVar7;
    if (local_48 == 0) {
      uVar6 = extraout_RDX;
      if (local_40 != 0) goto LAB_00100cad;
    }
    else {
      if (local_40 == 0) {
        local_40 = local_48;
      }
LAB_00100cad:
      pcVar3 = (char *)realpath_canon(local_40,uVar8);
      can_relative_to = pcVar3;
      if (pcVar3 == (char *)0x0) goto LAB_00100f62;
      uVar6 = local_40;
      if (uVar7 == 0) goto LAB_00100eb0;
    }
  }
  else {
    uVar4 = dcgettext(0,"missing operand",5);
    error(0,0,uVar4);
switchD_00100b94_caseD_4d:
    pcVar3 = (char *)usage(1);
LAB_00100eb0:
    uVar7 = (uint)puVar9;
    cVar1 = isdir(pcVar3);
    uVar6 = local_40;
    if (cVar1 == '\0') goto LAB_00100ec5;
  }
  if (local_48 == local_40) {
    can_relative_base = can_relative_to;
    pcVar10 = can_relative_base;
  }
  else {
    pcVar10 = can_relative_base;
    if (local_48 != 0) {
      pcVar10 = (char *)realpath_canon(local_48,uVar8,uVar6);
      local_40 = local_48;
      if (pcVar10 == (char *)0x0) {
LAB_00100f62:
        uVar4 = quotearg_n_style_colon(0,3,local_40);
        piVar5 = __errno_location();
        error(1,*piVar5,&_LC31,uVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (uVar7 == 0) {
        while (cVar1 = isdir(), local_40 = local_48, cVar1 == '\0') {
LAB_00100ec5:
          uVar4 = quotearg_n_style_colon(0,3,local_40);
          error(1,0x14,&_LC31,uVar4);
        }
      }
      pcVar3 = can_relative_to;
      cVar1 = path_prefix(pcVar10,can_relative_to);
      if (cVar1 == '\0') {
        free(pcVar10);
        can_relative_base = pcVar3;
        can_relative_to = (char *)0x0;
        pcVar10 = can_relative_base;
      }
    }
  }
  can_relative_base = pcVar10;
  local_40._0_1_ = 1;
  local_48 = (ulong)uVar8 & 0xfffffffffffffffb;
  do {
    if (param_1 <= _optind) {
      return (byte)local_40 ^ 1;
    }
    puVar9 = (uint *)param_2[_optind];
    pcVar3 = (char *)canonicalize_filename_mode(puVar9,uVar8);
    pcVar10 = pcVar3;
    if (logical == '\0') {
LAB_00100e20:
      if (pcVar10 == (char *)0x0) goto LAB_00100e29;
      if ((can_relative_to == (char *)0x0) ||
         (((pcVar3 = can_relative_to, can_relative_base != (char *)0x0 &&
           (cVar1 = path_prefix(can_relative_base,pcVar10), cVar1 == '\0')) ||
          (cVar1 = relpath(pcVar10,pcVar3,0,0), cVar1 == '\0')))) {
        fputs_unlocked(pcVar10,_stdout);
      }
      pcVar3 = _stdout->_IO_write_ptr;
      uVar7 = -(uint)(use_nuls == '\0') & 10;
      if (pcVar3 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar3 + 1;
        *pcVar3 = (char)uVar7;
      }
      else {
        __overflow(_stdout,uVar7);
      }
      free(pcVar10);
    }
    else {
      if (pcVar3 != (char *)0x0) {
        pcVar10 = (char *)canonicalize_filename_mode(pcVar3,local_48 & 0xffffffff);
        free(pcVar3);
        goto LAB_00100e20;
      }
LAB_00100e29:
      if (verbose != '\0') {
LAB_00100f2d:
        quotearg_n_style_colon(0,3,puVar9);
        piVar5 = __errno_location();
        error(0,*piVar5,&_LC31);
      }
      local_40._0_1_ = 0;
    }
    _optind = _optind + 1;
  } while( true );
}


