
_Bool path_prefix(char *prefix,char *path)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  cVar1 = prefix[1];
  if (cVar1 == '\0') {
    return path[1] != '/';
  }
  if ((cVar1 == '/') && (prefix[2] == '\0')) {
    return path[1] == '/';
  }
  pcVar3 = prefix + 1;
  pcVar2 = path + 1;
  while ((*pcVar2 != '\0' && (*pcVar2 == cVar1))) {
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 1;
    pcVar2 = pcVar2 + 1;
    if (cVar1 == '\0') {
      return *pcVar2 == '/' || *pcVar2 == '\0';
    }
  }
  return false;
}



/* WARNING: Unknown calling convention */

char * realpath_canon(char *fname,int can_mode)

{
  char *__ptr;
  char *pcVar1;
  undefined4 in_register_00000034;
  
  __ptr = (char *)canonicalize_filename_mode(fname,CONCAT44(in_register_00000034,can_mode));
  pcVar1 = __ptr;
  if ((logical != false) && (__ptr != (char *)0x0)) {
    pcVar1 = (char *)canonicalize_filename_mode(__ptr,can_mode & 0xfffffffb);
    free(__ptr);
  }
  return pcVar1;
}



/* WARNING: Unknown calling convention */

_Bool isdir(char *path)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  long in_FS_OFFSET;
  stat sb;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = stat(path,(stat *)&sb);
  if (iVar2 == 0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (sb.st_mode & 0xf000) == 0x4000;
    }
  }
  else {
    uVar3 = quotearg_style(4,path);
    uVar4 = dcgettext(0,"cannot stat %s",5);
    piVar5 = __errno_location();
    error(1,*piVar5,uVar4,uVar3);
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
  char *pcVar6;
  infomap *piVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar7 = infomap;
  if (status != 0) {
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
    iVar2 = strcmp("realpath",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
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
  exit(status);
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  _Bool _Var1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *__ptr;
  int *piVar6;
  uint uVar7;
  uint can_mode;
  char *pcVar8;
  char *local_48;
  char *local_40;
  
  pcVar8 = "eLmPqsz";
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  can_mode = 1;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_48 = (char *)0x0;
  local_40 = (char *)0x0;
  while (iVar3 = getopt_long(argc,argv,"eLmPqsz",longopts,0), iVar3 != -1) {
    if (0x81 < iVar3) goto switchD_00100b94_caseD_4d;
    if (iVar3 < 0x4c) {
      if (iVar3 == -0x83) {
        uVar4 = proper_name_lite("Padraig Brady",&_LC28);
        version_etc(_stdout,"realpath","GNU coreutils",_Version,uVar4,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar3 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00100b94_caseD_4d;
    }
    switch(iVar3) {
    case 0x4c:
      logical = true;
      can_mode = can_mode | 4;
      break;
    default:
      goto switchD_00100b94_caseD_4d;
    case 0x50:
      logical = false;
      can_mode = can_mode & 0xfffffffb;
      break;
    case 0x65:
      can_mode = can_mode & 0xfffffffc;
      break;
    case 0x6d:
      can_mode = can_mode & 0xfffffffc | 2;
      break;
    case 0x71:
      verbose = false;
      break;
    case 0x73:
      logical = false;
      can_mode = can_mode | 4;
      break;
    case 0x7a:
      use_nuls = true;
      break;
    case 0x80:
      local_40 = _optarg;
      break;
    case 0x81:
      local_48 = _optarg;
    }
  }
  if (argc <= _optind) {
    uVar4 = dcgettext(0,"missing operand",5);
    error(0,0,uVar4);
switchD_00100b94_caseD_4d:
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  if (local_48 == (char *)0x0) {
    if (local_40 != (char *)0x0) goto LAB_00100cad;
  }
  else {
    if (local_40 == (char *)0x0) {
      local_40 = local_48;
    }
LAB_00100cad:
    can_relative_to = realpath_canon(local_40,can_mode);
    if (can_relative_to == (char *)0x0) goto LAB_00100f62;
    if (((can_mode & 3) == 0) && (_Var1 = isdir(can_relative_to), !_Var1)) goto LAB_00100ec5;
  }
  if (local_48 == local_40) {
    can_relative_base = can_relative_to;
    pcVar8 = can_relative_base;
  }
  else {
    pcVar8 = can_relative_base;
    if (local_48 != (char *)0x0) {
      pcVar5 = realpath_canon(local_48,can_mode);
      local_40 = local_48;
      if (pcVar5 == (char *)0x0) {
LAB_00100f62:
        uVar4 = quotearg_n_style_colon(0,3,local_40);
        piVar6 = __errno_location();
        error(1,*piVar6,&_LC31,uVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pcVar8 = pcVar5;
      if ((can_mode & 3) == 0) {
        while (_Var1 = isdir(pcVar5), local_40 = local_48, !_Var1) {
LAB_00100ec5:
          uVar4 = quotearg_n_style_colon(0,3,local_40);
          pcVar5 = (char *)error(1,0x14,&_LC31,uVar4);
        }
      }
      pcVar5 = can_relative_to;
      _Var1 = path_prefix(pcVar8,can_relative_to);
      if (!_Var1) {
        free(pcVar8);
        can_relative_base = pcVar5;
        can_relative_to = (char *)0x0;
        pcVar8 = can_relative_base;
      }
    }
  }
  can_relative_base = pcVar8;
  local_40._0_1_ = 1;
  do {
    if (argc <= _optind) {
      return (int)((byte)local_40 ^ 1);
    }
    pcVar8 = argv[_optind];
    __ptr = (char *)canonicalize_filename_mode(pcVar8,can_mode);
    pcVar5 = __ptr;
    if (logical == false) {
LAB_00100e20:
      if (pcVar5 == (char *)0x0) goto LAB_00100e29;
      if ((can_relative_to == (char *)0x0) ||
         (((pcVar8 = can_relative_to, can_relative_base != (char *)0x0 &&
           (_Var1 = path_prefix(can_relative_base,pcVar5), !_Var1)) ||
          (cVar2 = relpath(pcVar5,pcVar8,0,0), cVar2 == '\0')))) {
        fputs_unlocked(pcVar5,_stdout);
      }
      pcVar8 = _stdout->_IO_write_ptr;
      uVar7 = -(uint)(use_nuls == false) & 10;
      if (pcVar8 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar8 + 1;
        *pcVar8 = (char)uVar7;
      }
      else {
        __overflow(_stdout,uVar7);
      }
      free(pcVar5);
    }
    else {
      if (__ptr != (char *)0x0) {
        pcVar5 = (char *)canonicalize_filename_mode(__ptr,can_mode & 0xfffffffb);
        free(__ptr);
        goto LAB_00100e20;
      }
LAB_00100e29:
      if (verbose != false) {
        quotearg_n_style_colon(0,3,pcVar8);
        piVar6 = __errno_location();
        error(0,*piVar6,&_LC31);
      }
      local_40._0_1_ = 0;
    }
    _optind = _optind + 1;
  } while( true );
}


