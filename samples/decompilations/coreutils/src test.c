
/* WARNING: Unknown calling convention */

_Bool binop(char *s)

{
  char cVar1;
  int iVar2;
  _Bool _Var3;
  
  cVar1 = *s;
  if ((cVar1 != '=') || (_Var3 = true, s[1] != '\0')) {
    if ((*s == '!') && ((s[1] == '=' && (s[2] == '\0')))) {
      return true;
    }
    if (((*s != '=') || (s[1] != '=')) || (_Var3 = true, s[2] != '\0')) {
      _Var3 = true;
      iVar2 = strcmp(s,"-nt");
      if (((iVar2 != 0) && ((cVar1 != '>' || (s[1] != '\0')))) &&
         ((cVar1 != '<' || (_Var3 = true, s[1] != '\0')))) {
        _Var3 = true;
        iVar2 = strcmp(s,"-ot");
        if ((((iVar2 != 0) && (iVar2 = strcmp(s,"-ef"), iVar2 != 0)) &&
            ((iVar2 = strcmp(s,"-eq"), iVar2 != 0 &&
             (((iVar2 = strcmp(s,"-ne"), iVar2 != 0 && (iVar2 = strcmp(s,"-lt"), iVar2 != 0)) &&
              (iVar2 = strcmp(s,"-le"), iVar2 != 0)))))) && (iVar2 = strcmp(s,"-gt"), iVar2 != 0)) {
          iVar2 = strcmp(s,"-ge");
          _Var3 = iVar2 == 0;
        }
      }
    }
  }
  return _Var3;
}



/* WARNING: Unknown calling convention */

char * find_int(char *string)

{
  byte bVar1;
  byte bVar2;
  ushort *puVar3;
  ushort **ppuVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  
  ppuVar4 = __ctype_b_loc();
  bVar1 = *string;
  puVar3 = *ppuVar4;
  bVar2 = *(byte *)((long)puVar3 + (ulong)bVar1 * 2 + 1);
  pcVar6 = string;
  while ((bVar2 & 0x20) != 0) {
    bVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 1;
    bVar2 = *(byte *)((long)puVar3 + (ulong)bVar1 * 2 + 1);
  }
  if (bVar1 == 0x2b) {
    pcVar7 = pcVar6 + 1;
    pcVar6 = pcVar7;
  }
  else {
    pcVar7 = pcVar6 + (bVar1 == 0x2d);
  }
  if ((int)*pcVar7 - 0x30U < 10) {
    bVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 1;
    if ((int)(char)bVar1 - 0x30U < 10) {
      do {
        bVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 1;
      } while ((int)(char)bVar1 - 0x30U < 10);
      bVar2 = *(byte *)((long)puVar3 + ((ulong)(uint)(int)(char)bVar1 & 0xff) * 2 + 1);
    }
    else {
      bVar2 = *(byte *)((long)puVar3 + ((ulong)(uint)(int)(char)bVar1 & 0xff) * 2 + 1);
    }
    while ((bVar2 & 0x20) != 0) {
      bVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 1;
      bVar2 = *(byte *)((long)puVar3 + (ulong)bVar1 * 2 + 1);
    }
    if (bVar1 == 0) {
      return pcVar6;
    }
  }
  uVar5 = quote(string);
  pcVar6 = (char *)dcgettext(0,"invalid integer %s",5);
                    /* WARNING: Subroutine does not return */
  test_syntax_error(pcVar6,uVar5);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void beyond(void)

{
  undefined8 uVar1;
  char *format;
  
  uVar1 = quote(argv[(long)argc + -1]);
  format = (char *)dcgettext(0,"missing argument after %s",5);
                    /* WARNING: Subroutine does not return */
  test_syntax_error(format,uVar1);
}



/* WARNING: Unknown calling convention */

_Bool binary_operator(_Bool l_is_l)

{
  char cVar1;
  long lVar2;
  char **ppcVar3;
  __time_t _Var4;
  __syscall_slong_t _Var5;
  int iVar6;
  undefined8 uVar7;
  size_t sVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  long in_FS_OFFSET;
  bool bVar12;
  stat stat_buf;
  stat stat_spare;
  char lbuf [21];
  char rbuf [21];
  
  ppcVar3 = argv;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (l_is_l) {
    pos = pos + 1;
  }
  iVar6 = pos + 1;
  bVar12 = false;
  if (iVar6 < argc + -2) {
    pcVar10 = argv[(long)iVar6 + 1];
    if (((*pcVar10 == '-') && (pcVar10[1] == 'l')) && (pcVar10[2] == '\0')) {
      bVar12 = true;
      pos = iVar6;
    }
    else {
      bVar12 = false;
    }
  }
  iVar11 = pos;
  pcVar10 = argv[iVar6];
  if (*pcVar10 != '-') {
    if ((*pcVar10 == '=') && ((pcVar10[1] == '\0' || ((pcVar10[1] == '=' && (pcVar10[2] == '\0')))))
       ) {
      iVar6 = strcmp(argv[pos],argv[(long)pos + 2]);
      bVar12 = iVar6 == 0;
      pos = iVar11 + 3;
    }
    else if (((*pcVar10 == '!') && (pcVar10[1] == '=')) && (pcVar10[2] == '\0')) {
      iVar6 = strcmp(argv[pos],argv[(long)pos + 2]);
      bVar12 = iVar6 != 0;
      pos = iVar11 + 3;
    }
    else if ((*pcVar10 == '>') && (pcVar10[1] == '\0')) {
      iVar6 = strcoll(argv[pos],argv[(long)pos + 2]);
      bVar12 = 0 < iVar6;
      pos = iVar11 + 3;
    }
    else {
      if ((*pcVar10 != '<') || (pcVar10[1] != '\0')) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("0","src/test.c",0x186,"binary_operator");
      }
      iVar11 = pos + 3;
      iVar6 = strcoll(argv[pos],argv[(long)pos + 2]);
      bVar12 = SUB41((uint)iVar6 >> 0x1f,0);
      pos = iVar11;
    }
    goto LAB_001003b8;
  }
  cVar1 = pcVar10[1];
  if ((cVar1 == 'l') || (cVar1 == 'g')) {
    if ((pcVar10[2] != 't') && (pcVar10[2] != 'e')) goto LAB_001005bc;
  }
  else if (cVar1 == 'e') {
    if (pcVar10[2] != 'q') {
      if ((pcVar10[2] != 'f') || (pcVar10[3] != '\0')) goto LAB_001005bc;
      pos = pos + 3;
      if (bVar12 || l_is_l) {
        pcVar10 = (char *)dcgettext(0,"-ef does not accept -l",5);
                    /* WARNING: Subroutine does not return */
        test_syntax_error(pcVar10);
      }
      iVar11 = stat(argv[(long)iVar6 + -1],(stat *)&stat_buf);
      bVar12 = false;
      if (((iVar11 == 0) && (iVar6 = stat(ppcVar3[(long)iVar6 + 1],(stat *)&stat_spare), iVar6 == 0)
          ) && (stat_buf.st_dev == stat_spare.st_dev)) {
        bVar12 = stat_buf.st_ino == stat_spare.st_ino;
      }
      goto LAB_001003b8;
    }
  }
  else {
    if (cVar1 != 'n') {
      if (((cVar1 == 'o') && (pcVar10[2] == 't')) && (pcVar10[3] == '\0')) {
        pos = pos + 3;
        if (bVar12 || l_is_l) {
          pcVar10 = (char *)dcgettext(0,"-ot does not accept -l",5);
                    /* WARNING: Subroutine does not return */
          test_syntax_error(pcVar10);
        }
        iVar11 = stat(argv[(long)iVar6 + -1],(stat *)&stat_spare);
        _Var5 = stat_spare.st_mtim.tv_nsec;
        _Var4 = stat_spare.st_mtim.tv_sec;
        if (iVar11 == 0) {
          iVar6 = stat(ppcVar3[(long)iVar6 + 1],(stat *)&stat_spare);
          bVar12 = false;
          if (iVar6 == 0) {
            bVar12 = SUB41(((uint)(stat_spare.st_mtim.tv_nsec < _Var5) -
                           (uint)(_Var5 < stat_spare.st_mtim.tv_nsec)) +
                           ((uint)(stat_spare.st_mtim.tv_sec < _Var4) -
                           (uint)(_Var4 < stat_spare.st_mtim.tv_sec)) * 2 >> 0x1f,0);
          }
        }
        else {
          iVar6 = stat(ppcVar3[(long)iVar6 + 1],(stat *)&stat_spare);
          bVar12 = iVar6 == 0;
        }
        goto LAB_001003b8;
      }
      goto LAB_001005bc;
    }
    if (pcVar10[2] != 'e') {
      if ((pcVar10[2] != 't') || (pcVar10[3] != '\0')) goto LAB_001005bc;
      pos = pos + 3;
      if (bVar12 || l_is_l) {
        pcVar10 = (char *)dcgettext(0,"-nt does not accept -l",5);
                    /* WARNING: Subroutine does not return */
        test_syntax_error(pcVar10);
      }
      iVar11 = stat(argv[(long)iVar6 + -1],(stat *)&stat_spare);
      _Var5 = stat_spare.st_mtim.tv_nsec;
      _Var4 = stat_spare.st_mtim.tv_sec;
      if (iVar11 == 0) {
        iVar6 = stat(ppcVar3[(long)iVar6 + 1],(stat *)&stat_spare);
        if (iVar6 == 0) {
          bVar12 = 0 < (int)(((uint)(stat_spare.st_mtim.tv_nsec < _Var5) -
                             (uint)(_Var5 < stat_spare.st_mtim.tv_nsec)) +
                            ((uint)(stat_spare.st_mtim.tv_sec < _Var4) -
                            (uint)(_Var4 < stat_spare.st_mtim.tv_sec)) * 2);
          goto LAB_001003b8;
        }
      }
      else {
        iVar6 = stat(ppcVar3[(long)iVar6 + 1],(stat *)&stat_spare);
        bVar12 = false;
        if (iVar6 == 0) goto LAB_001003b8;
      }
      bVar12 = iVar11 == 0;
      goto LAB_001003b8;
    }
  }
  if (pcVar10[3] == '\0') {
    if (l_is_l) {
      sVar8 = strlen(argv[(long)iVar6 + -1]);
      pcVar10 = (char *)umaxtostr(sVar8,lbuf);
    }
    else {
      pcVar10 = find_int(argv[(long)iVar6 + -1]);
    }
    if (bVar12) {
      sVar8 = strlen(argv[(long)iVar6 + 2]);
      pcVar9 = (char *)umaxtostr(sVar8,rbuf);
    }
    else {
      pcVar9 = find_int(argv[(long)iVar6 + 1]);
    }
    iVar11 = strintcmp(pcVar10,pcVar9);
    bVar12 = argv[iVar6][2] == 'e';
    cVar1 = argv[iVar6][1];
    pos = pos + 3;
    if (cVar1 == 'l') {
      bVar12 = iVar11 < (int)(uint)bVar12;
    }
    else if (cVar1 == 'g') {
      bVar12 = (int)-(uint)bVar12 < iVar11;
    }
    else {
      bVar12 = (iVar11 != 0) == bVar12;
    }
LAB_001003b8:
    if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return bVar12;
  }
LAB_001005bc:
  uVar7 = quote();
  pcVar10 = (char *)dcgettext(0,"%s: unknown binary operator",5);
                    /* WARNING: Subroutine does not return */
  test_syntax_error(pcVar10,uVar7);
}



/* WARNING: Unknown calling convention */

_Bool unary_operator(void)

{
  long lVar1;
  int iVar2;
  __gid_t _Var3;
  __uid_t _Var4;
  undefined8 uVar5;
  char *pcVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  long in_FS_OFFSET;
  bool bVar10;
  stat stat_buf;
  
  lVar9 = (long)pos;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  switch(argv[lVar9][1]) {
  case 'G':
    if (argc <= pos + 1) {
LAB_00100fde:
      pos = pos + 1;
                    /* WARNING: Subroutine does not return */
      beyond();
    }
    pos = pos + 2;
    iVar2 = stat(argv[(long)pos + -1],(stat *)&stat_buf);
    if (iVar2 == 0) {
      piVar7 = __errno_location();
      *piVar7 = 0;
      _Var3 = getegid();
      if ((_Var3 != 0xffffffff) || (bVar10 = false, *piVar7 == 0)) {
        bVar10 = stat_buf.st_gid == _Var3;
      }
      break;
    }
    goto LAB_00100fb8;
  default:
    uVar5 = quote();
    pcVar6 = (char *)dcgettext(0,"%s: unary operator expected",5);
                    /* WARNING: Subroutine does not return */
    test_syntax_error(pcVar6,uVar5);
  case 'L':
  case 'h':
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar2 = lstat(argv[(long)pos + -1],(stat *)&stat_buf);
    bVar10 = false;
    if (iVar2 == 0) {
      bVar10 = (stat_buf.st_mode & 0xf000) == 0xa000;
    }
    break;
  case 'N':
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar2 = stat(argv[(long)pos + -1],(stat *)&stat_buf);
    if (iVar2 == 0) {
      bVar10 = 0 < (int)(((uint)(stat_buf.st_atim.tv_nsec < stat_buf.st_mtim.tv_nsec) -
                         (uint)(stat_buf.st_mtim.tv_nsec < stat_buf.st_atim.tv_nsec)) +
                        ((uint)(stat_buf.st_atim.tv_sec < stat_buf.st_mtim.tv_sec) -
                        (uint)(stat_buf.st_mtim.tv_sec < stat_buf.st_atim.tv_sec)) * 2);
      break;
    }
    goto LAB_00100fb8;
  case 'O':
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar2 = stat(argv[(long)pos + -1],(stat *)&stat_buf);
    if (iVar2 == 0) {
      piVar7 = __errno_location();
      *piVar7 = 0;
      _Var4 = geteuid();
      if ((_Var4 != 0xffffffff) || (bVar10 = false, *piVar7 == 0)) {
        bVar10 = stat_buf.st_uid == _Var4;
      }
      break;
    }
LAB_00100fb8:
    bVar10 = false;
    break;
  case 'S':
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar2 = stat(argv[(long)pos + -1],(stat *)&stat_buf);
    bVar10 = false;
    if (iVar2 == 0) {
      bVar10 = (stat_buf.st_mode & 0xf000) == 0xc000;
    }
    break;
  case 'b':
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar2 = stat(argv[(long)pos + -1],(stat *)&stat_buf);
    bVar10 = false;
    if (iVar2 == 0) {
      bVar10 = (stat_buf.st_mode & 0xf000) == 0x6000;
    }
    break;
  case 'c':
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar2 = stat(argv[(long)pos + -1],(stat *)&stat_buf);
    bVar10 = false;
    if (iVar2 == 0) {
      bVar10 = (stat_buf.st_mode & 0xf000) == 0x2000;
    }
    break;
  case 'd':
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar2 = stat(argv[(long)pos + -1],(stat *)&stat_buf);
    bVar10 = false;
    if (iVar2 == 0) {
      bVar10 = (stat_buf.st_mode & 0xf000) == 0x4000;
    }
    break;
  case 'e':
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar2 = stat(argv[(long)pos + -1],(stat *)&stat_buf);
    bVar10 = iVar2 == 0;
    break;
  case 'f':
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar2 = stat(argv[(long)pos + -1],(stat *)&stat_buf);
    bVar10 = false;
    if (iVar2 == 0) {
      bVar10 = (stat_buf.st_mode & 0xf000) == 0x8000;
    }
    break;
  case 'g':
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar2 = stat(argv[(long)pos + -1],(stat *)&stat_buf);
    bVar10 = false;
    if (iVar2 == 0) {
      bVar10 = (bool)((byte)(stat_buf.st_mode >> 10) & 1);
    }
    break;
  case 'k':
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar2 = stat(argv[lVar9 + 1],(stat *)&stat_buf);
    bVar10 = false;
    if (iVar2 == 0) {
      bVar10 = (bool)((byte)(stat_buf.st_mode >> 9) & 1);
    }
    break;
  case 'n':
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    bVar10 = *argv[lVar9 + 1] != '\0';
    break;
  case 'p':
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar2 = stat(argv[lVar9 + 1],(stat *)&stat_buf);
    bVar10 = false;
    if (iVar2 == 0) {
      bVar10 = (stat_buf.st_mode & 0xf000) == 0x1000;
    }
    break;
  case 'r':
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar2 = euidaccess(argv[lVar9 + 1],4);
    bVar10 = iVar2 == 0;
    break;
  case 's':
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar2 = stat(argv[lVar9 + 1],(stat *)&stat_buf);
    bVar10 = false;
    if (iVar2 == 0) {
      bVar10 = 0 < stat_buf.st_size;
    }
    break;
  case 't':
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    pcVar6 = find_int(argv[lVar9 + 1]);
    piVar7 = __errno_location();
    *piVar7 = 0;
    uVar8 = __isoc23_strtol(pcVar6,0,10);
    bVar10 = false;
    if ((*piVar7 != 0x22) && (uVar8 < 0x80000000)) {
      iVar2 = isatty((int)uVar8);
      bVar10 = iVar2 != 0;
    }
    break;
  case 'u':
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar2 = stat(argv[lVar9 + 1],(stat *)&stat_buf);
    bVar10 = false;
    if (iVar2 == 0) {
      bVar10 = (bool)((byte)(stat_buf.st_mode >> 0xb) & 1);
    }
    break;
  case 'w':
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar2 = euidaccess(argv[lVar9 + 1],2);
    bVar10 = iVar2 == 0;
    break;
  case 'x':
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar2 = euidaccess(argv[lVar9 + 1],1);
    bVar10 = iVar2 == 0;
    break;
  case 'z':
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    bVar10 = *argv[lVar9 + 1] == '\0';
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

_Bool two_arguments(void)

{
  char *pcVar1;
  _Bool _Var2;
  long lVar3;
  
  lVar3 = (long)pos;
  pcVar1 = argv[lVar3];
  if ((*pcVar1 == '!') && (pcVar1[1] == '\0')) {
    pos = pos + 2;
    return *argv[lVar3 + 1] == '\0';
  }
  if ((*pcVar1 == '-') && ((pcVar1[1] != '\0' && (pcVar1[2] == '\0')))) {
    _Var2 = unary_operator();
    return _Var2;
  }
                    /* WARNING: Subroutine does not return */
  beyond();
}



/* WARNING: Unknown calling convention */

_Bool or(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char **ppcVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  byte bVar10;
  int nargs;
  int unaff_R12D;
  byte bVar11;
  _Bool _Var12;
  _Bool local_39;
  
  local_39 = false;
  iVar7 = argc;
LAB_00101070:
  bVar10 = 1;
  if (iVar7 <= pos) {
LAB_00101185:
                    /* WARNING: Subroutine does not return */
    beyond();
  }
  do {
    ppcVar6 = argv;
    lVar9 = (long)pos;
    bVar2 = false;
    bVar11 = 0;
    while( true ) {
      pcVar5 = argv[lVar9];
      iVar8 = (int)lVar9;
      cVar1 = *pcVar5;
      if (cVar1 != '!') break;
      if (pcVar5[1] != '\0') {
        if (bVar2) {
          pos = unaff_R12D;
        }
        if (3 < iVar7 - iVar8) goto LAB_00101190;
        if (iVar7 - iVar8 != 3) goto LAB_00101110;
        goto LAB_001011d1;
      }
      lVar9 = lVar9 + 1;
      unaff_R12D = iVar8 + 1;
      if (iVar7 <= (int)lVar9) {
        pos = unaff_R12D;
                    /* WARNING: Subroutine does not return */
        beyond();
      }
      bVar11 = bVar11 ^ 1;
      bVar2 = true;
    }
    if (bVar2) {
      pos = unaff_R12D;
    }
    if (cVar1 == '(') {
      if (pcVar5[1] == '\0') {
        pos = iVar8 + 1;
        if (iVar7 <= pos) goto LAB_00101185;
        if (iVar8 + 2 < iVar7) {
          nargs = 1;
          ppcVar6 = argv + (iVar8 + 2);
          do {
            if ((**ppcVar6 == ')') && ((*ppcVar6)[1] == '\0')) break;
            if (nargs == 4) {
              nargs = iVar7 - pos;
              break;
            }
            nargs = nargs + 1;
            ppcVar6 = ppcVar6 + 1;
          } while (nargs != (iVar7 + -1) - iVar8);
        }
        else {
          nargs = 1;
        }
        _Var12 = posixtest(nargs);
        pcVar5 = argv[pos];
        if (pcVar5 == (char *)0x0) {
          uVar3 = quote(&_LC19);
          pcVar5 = (char *)dcgettext(0,"%s expected",5);
                    /* WARNING: Subroutine does not return */
          test_syntax_error(pcVar5,uVar3);
        }
        if ((*pcVar5 != ')') || (pcVar5[1] != '\0')) {
          uVar3 = quote_n(1,pcVar5);
          uVar4 = quote_n(0,&_LC19);
          pcVar5 = (char *)dcgettext(0,"%s expected, found %s",5);
                    /* WARNING: Subroutine does not return */
          test_syntax_error(pcVar5,uVar4,uVar3);
        }
        pos = pos + 1;
        iVar7 = argc;
      }
      else {
        if (3 < iVar7 - iVar8) goto LAB_00101190;
        if ((iVar7 - iVar8 == 3) && (_Var12 = binop(argv[lVar9 + 1]), _Var12)) goto LAB_001011f3;
LAB_00101110:
        pos = iVar8 + 1;
        _Var12 = cVar1 != '\0';
      }
LAB_0010111f:
      bVar10 = bVar10 & (_Var12 ^ bVar11);
      if (iVar7 <= pos) {
LAB_00101213:
        return (_Bool)(local_39 | bVar10);
      }
    }
    else {
      if (iVar7 - iVar8 < 4) {
        if (iVar7 - iVar8 == 3) goto LAB_001011d1;
LAB_001010f8:
        if (((cVar1 != '-') || (pcVar5[1] == '\0')) || (pcVar5[2] != '\0')) goto LAB_00101110;
        _Var12 = unary_operator();
        iVar7 = argc;
        goto LAB_0010111f;
      }
LAB_00101190:
      if ((((*pcVar5 == '-') && (pcVar5[1] == 'l')) && (pcVar5[2] == '\0')) &&
         (_Var12 = binop(argv[lVar9 + 2]), _Var12)) {
        _Var12 = binary_operator(true);
        iVar7 = argc;
        goto LAB_0010111f;
      }
LAB_001011d1:
      _Var12 = binop(ppcVar6[lVar9 + 1]);
      if (!_Var12) goto LAB_001010f8;
LAB_001011f3:
      _Var12 = binary_operator(false);
      bVar10 = bVar10 & (_Var12 ^ bVar11);
      iVar7 = argc;
      if (argc <= pos) goto LAB_00101213;
    }
    pcVar5 = argv[pos];
    if (((*pcVar5 != '-') || (pcVar5[1] != 'a')) || (pcVar5[2] != '\0')) break;
    pos = pos + 1;
    if (iVar7 <= pos) goto LAB_00101185;
  } while( true );
  local_39 = (_Bool)(local_39 | bVar10);
  if (((*pcVar5 != '-') || (pcVar5[1] != 'o')) || (pcVar5[2] != '\0')) {
    return local_39;
  }
  pos = pos + 1;
  goto LAB_00101070;
}



/* WARNING: Unknown calling convention */

_Bool three_arguments(void)

{
  char *pcVar1;
  char **ppcVar2;
  int iVar3;
  _Bool _Var4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  iVar3 = pos;
  ppcVar2 = argv;
  lVar5 = (long)pos;
  pcVar7 = argv[lVar5 + 1];
  _Var4 = binop(pcVar7);
  if (_Var4) {
    _Var4 = binary_operator(false);
    return _Var4;
  }
  pcVar1 = ppcVar2[lVar5];
  if ((*pcVar1 == '!') && (pcVar1[1] == '\0')) {
    pos = iVar3 + 1;
    if (pos < argc) {
      _Var4 = two_arguments();
      return !_Var4;
    }
  }
  else {
    if ((*pcVar1 == '(') &&
       (((pcVar1[1] == '\0' && (pcVar1 = ppcVar2[lVar5 + 2], *pcVar1 == ')')) && (pcVar1[1] == '\0')
        ))) {
      pos = iVar3 + 3;
      return *pcVar7 != '\0';
    }
    if ((((*pcVar7 != '-') ||
         (((pcVar7[1] != 'a' || (pcVar7[2] != '\0')) && ((pcVar7[1] != 'o' || (pcVar7[2] != '\0'))))
         )) && ((*pcVar7 != '>' || (pcVar7[1] != '\0')))) &&
       ((*pcVar7 != '<' || (pcVar7[1] != '\0')))) {
      uVar6 = quote(pcVar7);
      pcVar7 = (char *)dcgettext(0,"%s: binary operator expected",5);
                    /* WARNING: Subroutine does not return */
      test_syntax_error(pcVar7,uVar6);
    }
    if (iVar3 < argc) {
      _Var4 = or();
      return _Var4;
    }
  }
                    /* WARNING: Subroutine does not return */
  beyond();
}



/* WARNING: Unknown calling convention */

_Bool posixtest(int nargs)

{
  char *pcVar1;
  _Bool _Var2;
  long lVar3;
  
  if (nargs == 3) {
    _Var2 = three_arguments();
    return _Var2;
  }
  if (nargs < 4) {
    if (nargs == 1) {
      lVar3 = (long)pos;
      pos = pos + 1;
      return *argv[lVar3] != '\0';
    }
    if (nargs == 2) {
      _Var2 = two_arguments();
      return _Var2;
    }
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 < nargs","src/test.c",0x2a7,"posixtest");
  }
  if (nargs == 4) {
    pcVar1 = argv[pos];
    if ((*pcVar1 == '!') && (pcVar1[1] == '\0')) {
      pos = pos + 1;
      if (pos < argc) {
        _Var2 = three_arguments();
        return !_Var2;
      }
      goto LAB_001016c4;
    }
    if ((((*pcVar1 == '(') && (pcVar1[1] == '\0')) && (*argv[(long)pos + 3] == ')')) &&
       (argv[(long)pos + 3][1] == '\0')) {
      pos = pos + 1;
      _Var2 = two_arguments();
      pos = pos + 1;
      return _Var2;
    }
  }
  if (pos < argc) {
    _Var2 = or();
    return _Var2;
  }
LAB_001016c4:
                    /* WARNING: Subroutine does not return */
  beyond();
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
  
  pFVar1 = _stdout;
  uVar5 = _program_name;
  piVar6 = infomap;
  if (status != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_0010172a;
  }
  pcVar4 = (char *)dcgettext(0,
                             "Usage: test EXPRESSION\n  or:  test\n  or:  [ EXPRESSION ]\n  or:  [ ]\n  or:  [ OPTION\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Exit with the status determined by EXPRESSION.\n\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nAn omitted EXPRESSION defaults to false.  Otherwise,\nEXPRESSION is true or false and sets exit status.  It is one of:\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  ( EXPRESSION )               EXPRESSION is true\n  ! EXPRESSION                 EXPRESSION is false\n  EXPRESSION1 -a EXPRESSION2   both EXPRESSION1 and EXPRESSION2 are true\n  EXPRESSION1 -o EXPRESSION2   either EXPRESSION1 or EXPRESSION2 is true\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  -n STRING            the length of STRING is nonzero\n  STRING               equivalent to -n STRING\n  -z STRING            the length of STRING is zero\n  STRING1 = STRING2    the strings are equal\n  STRING1 != STRING2   the strings are not equal\n  STRING1 > STRING2    STRING1 is greater than STRING2 in the current locale\n  STRING1 < STRING2    STRING1 is less than STRING2 in the current locale\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  INTEGER1 -eq INTEGER2   INTEGER1 is equal to INTEGER2\n  INTEGER1 -ge INTEGER2   INTEGER1 is greater than or equal to INTEGER2\n  INTEGER1 -gt INTEGER2   INTEGER1 is greater than INTEGER2\n  INTEGER1 -le INTEGER2   INTEGER1 is less than or equal to INTEGER2\n  INTEGER1 -lt INTEGER2   INTEGER1 is less than INTEGER2\n  INTEGER1 -ne INTEGER2   INTEGER1 is not equal to INTEGER2\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  FILE1 -ef FILE2   FILE1 and FILE2 have the same device and inode numbers\n  FILE1 -nt FILE2   FILE1 is newer (modification date) than FILE2\n  FILE1 -ot FILE2   FILE1 is older than FILE2\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  -b FILE     FILE exists and is block special\n  -c FILE     FILE exists and is character special\n  -d FILE     FILE exists and is a directory\n  -e FILE     FILE exists\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -f FILE     FILE exists and is a regular file\n  -g FILE     FILE exists and is set-group-ID\n  -G FILE     FILE exists and is owned by the effective group ID\n  -h FILE     FILE exists and is a symbolic link (same as -L)\n  -k FILE     FILE exists and has its sticky bit set\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -L FILE     FILE exists and is a symbolic link (same as -h)\n  -N FILE     FILE exists and has been modified since it was last read\n  -O FILE     FILE exists and is owned by the effective user ID\n  -p FILE     FILE exists and is a named pipe\n  -r FILE     FILE exists and the user has read access\n  -s FILE     FILE exists and has a size greater than zero\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -S FILE     FILE exists and is a socket\n  -t FD       file descriptor FD is opened on a terminal\n  -u FILE     FILE exists and its set-user-ID bit is set\n  -w FILE     FILE exists and the user has write access\n  -x FILE     FILE exists and the user has execute (or search) access\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nExcept for -h and -L, all FILE-related tests dereference symbolic links.\nBeware that parentheses need to be escaped (e.g., by backslashes) for shells.\nINTEGER may also be -l STRING, which evaluates to the length of STRING.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nBinary -a and -o are ambiguous.  Use \'test EXPR1 && test EXPR2\'\nor \'test EXPR1 || test EXPR2\' instead.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n\'[\' honors --help and --version, but \'test\' treats them as STRINGs.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,"test and/or [",5);
  uVar3 = dcgettext(0,
                    "\nYour shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5);
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
    iVar2 = strcmp("test",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)piVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC25;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_00101ae5;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC25);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00101ae5:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC25);
    if (puVar7 == &_LC25) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_0010172a:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Unknown calling convention */

void test_syntax_error(char *format,...)

{
  char in_AL;
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  va_list ap;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Qa;
    local_78 = in_XMM1_Qa;
    local_68 = in_XMM2_Qa;
    local_58 = in_XMM3_Qa;
    local_48 = in_XMM4_Qa;
    local_38 = in_XMM5_Qa;
    local_28 = in_XMM6_Qa;
    local_18 = in_XMM7_Qa;
  }
  ap[0].overflow_arg_area = &stack0x00000008;
  ap[0].reg_save_area = local_b8;
  ap[0].gp_offset = 8;
  ap[0].fp_offset = 0x30;
  local_b0 = in_RSI;
  local_a8 = in_RDX;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  verror(0,0,format,ap);
                    /* WARNING: Subroutine does not return */
  exit(2);
}



void binary_operator_cold(void)

{
  char *format;
  
  format = (char *)dcgettext(0,"-ot does not accept -l",5);
                    /* WARNING: Subroutine does not return */
  test_syntax_error(format);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int margc,char **margv)

{
  _Bool _Var1;
  uint uVar2;
  undefined8 uVar3;
  char *format;
  
  set_program_name(*margv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  _exit_failure = 2;
  atexit((__func *)&close_stdout);
  pos = 1;
  argv = margv;
  argc = margc;
  if (margc < 2) {
    uVar2 = 1;
  }
  else {
    _Var1 = posixtest(margc + -1);
    if (pos != argc) {
      uVar3 = quote(argv[pos]);
      format = (char *)dcgettext(0,"extra argument %s",5);
                    /* WARNING: Subroutine does not return */
      test_syntax_error(format,uVar3);
    }
    uVar2 = (uint)!_Var1;
  }
  return uVar2;
}


