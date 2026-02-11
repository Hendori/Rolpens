
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
    goto LAB_0010014a;
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
    if (pcVar6 != (char *)0x0) goto LAB_0010032d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","realpath");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_0010032d:
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
LAB_0010014a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  uint *puVar8;
  undefined8 uVar9;
  int *piVar10;
  ulong extraout_RDX;
  ulong uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  bool bVar15;
  ulong local_48;
  ulong local_40;
  
  puVar14 = (uint *)&_LC27;
  puVar13 = &switchD_00100b14::switchdataD_00101000;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  uVar12 = 1;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_48 = 0;
  local_40 = 0;
  while (iVar4 = getopt_long(param_1,param_2,&_LC27,longopts,0), iVar4 != -1) {
    if (0x81 < iVar4) goto switchD_00100b14_caseD_4d;
    if (iVar4 < 0x4c) {
      if (iVar4 == -0x83) {
        uVar9 = proper_name_lite("Padraig Brady",&_LC28);
        version_etc(_stdout,"realpath","GNU coreutils",_Version,uVar9,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 != -0x82) goto switchD_00100b14_caseD_4d;
      usage(0);
      local_40 = local_48;
      goto LAB_00100fa0;
    }
    switch(iVar4) {
    case 0x4c:
      logical = '\x01';
      uVar12 = uVar12 | 4;
      break;
    default:
      goto switchD_00100b14_caseD_4d;
    case 0x50:
      logical = '\0';
      uVar12 = uVar12 & 0xfffffffb;
      break;
    case 0x65:
      uVar12 = uVar12 & 0xfffffffc;
      break;
    case 0x6d:
      uVar12 = uVar12 & 0xfffffffc | 2;
      break;
    case 0x71:
      verbose = '\0';
      break;
    case 0x73:
      logical = '\0';
      uVar12 = uVar12 | 4;
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
    puVar13 = (uint *)(ulong)(uVar12 & 3);
    if (local_48 == 0) {
      uVar11 = extraout_RDX;
      if (local_40 != 0) goto LAB_00100c2d;
    }
    else {
      if (local_40 == 0) {
        local_40 = local_48;
      }
LAB_00100c2d:
      puVar8 = (uint *)realpath_canon(local_40,uVar12);
      can_relative_to = puVar8;
      if (puVar8 == (uint *)0x0) goto LAB_00100fa0;
      uVar11 = local_40;
      if ((uVar12 & 3) == 0) goto LAB_00100f2f;
    }
LAB_00100c58:
    if (local_48 == local_40) {
      can_relative_base = can_relative_to;
      puVar14 = can_relative_base;
      goto LAB_00100cd4;
    }
    puVar14 = can_relative_base;
    if (local_48 == 0) goto LAB_00100cd4;
    puVar14 = (uint *)realpath_canon(local_48,uVar12,uVar11);
    local_40 = local_48;
    if (puVar14 == (uint *)0x0) {
LAB_00100fa0:
      param_2 = (undefined8 *)quotearg_n_style_colon(0,3,local_40);
      piVar10 = __errno_location();
      error(1,*piVar10,&_LC31,param_2);
      goto LAB_00100fcc;
    }
    if (((int)puVar13 == 0) && (cVar3 = isdir(puVar14), cVar3 == '\0')) goto LAB_00100f44;
    puVar13 = can_relative_to;
    if (*(char *)((long)puVar14 + 1) == '\0') goto LAB_00100f6b;
    lVar5 = 1;
    if ((*(char *)((long)puVar14 + 1) == '/') && (*(char *)((long)puVar14 + 2) == '\0')) {
      bVar15 = *(char *)((long)can_relative_to + 1) == '/';
      goto LAB_00100cc5;
    }
    while (pcVar7 = (char *)((long)puVar14 + lVar5), *pcVar7 != '\0') {
      pcVar6 = (char *)((long)can_relative_to + lVar5);
      lVar5 = lVar5 + 1;
      if ((*pcVar6 == '\0') || (*pcVar7 != *pcVar6)) goto LAB_00100e58;
    }
    if ((*(char *)((long)can_relative_to + lVar5) == '/') ||
       (*(char *)((long)can_relative_to + lVar5) == '\0')) goto LAB_00100cd4;
  }
  else {
    uVar9 = dcgettext(0,"missing operand",5);
    error(0,0,uVar9);
switchD_00100b14_caseD_4d:
    puVar8 = (uint *)usage(1);
LAB_00100f2f:
    cVar3 = isdir(puVar8);
    uVar11 = local_40;
    if (cVar3 != '\0') goto LAB_00100c58;
LAB_00100f44:
    uVar9 = quotearg_n_style_colon(0,3,local_40);
    error(1,0x14,&_LC31,uVar9);
LAB_00100f6b:
    bVar15 = *(char *)((long)puVar13 + 1) != '/';
LAB_00100cc5:
    if (bVar15) goto LAB_00100cd4;
  }
LAB_00100e58:
  free(puVar14);
  can_relative_to = (uint *)0x0;
  puVar14 = puVar13;
LAB_00100cd4:
  can_relative_base = puVar14;
  bVar2 = 1;
  local_48 = (ulong)uVar12 & 0xfffffffffffffffb;
  do {
    if (param_1 <= _optind) {
      return bVar2 ^ 1;
    }
    puVar14 = (uint *)param_2[_optind];
    pcVar6 = (char *)canonicalize_filename_mode(puVar14,uVar12);
    pcVar7 = pcVar6;
    if (logical == '\0') {
LAB_00100d2f:
      if (pcVar7 == (char *)0x0) goto LAB_00100eab;
      if (can_relative_to == (uint *)0x0) goto LAB_00100da8;
      if (can_relative_base == (uint *)0x0) {
LAB_00100e8f:
        cVar3 = relpath(pcVar7,can_relative_to,0,0);
        if (cVar3 == '\0') goto LAB_00100da8;
      }
      else {
        cVar3 = *(char *)((long)can_relative_base + 1);
        if ((cVar3 == '\0') || ((cVar3 == '/' && (*(char *)((long)can_relative_base + 2) == '\0'))))
        {
          if (pcVar7[1] != '/') goto LAB_00100e8f;
        }
        else {
          pcVar6 = pcVar7 + 1;
          puVar14 = can_relative_base;
          do {
            if ((*pcVar6 != cVar3) || (*pcVar6 == '\0')) goto LAB_00100da8;
            cVar3 = *(char *)((long)puVar14 + 2);
            pcVar6 = pcVar6 + 1;
            puVar14 = (uint *)((long)puVar14 + 1);
          } while (cVar3 != '\0');
          if ((*pcVar6 == '/') || (*pcVar6 == '\0')) goto LAB_00100e8f;
        }
LAB_00100da8:
        fputs_unlocked(pcVar7,_stdout);
      }
      bVar15 = use_nuls == '\0';
      pbVar1 = (byte *)_stdout->_IO_write_ptr;
      if (pbVar1 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
        *pbVar1 = -bVar15 & 10;
      }
      else {
        __overflow(_stdout,-(uint)(use_nuls == '\0') & 10);
      }
      free(pcVar7);
    }
    else {
      if (pcVar6 != (char *)0x0) {
        pcVar7 = (char *)canonicalize_filename_mode(pcVar6,local_48 & 0xffffffff);
        free(pcVar6);
        goto LAB_00100d2f;
      }
LAB_00100eab:
      if (verbose != '\0') {
LAB_00100fcc:
        uVar9 = quotearg_n_style_colon(0,3,puVar14);
        piVar10 = __errno_location();
        error(0,*piVar10,&_LC31,uVar9);
      }
      bVar2 = 0;
    }
    _optind = _optind + 1;
  } while( true );
}


