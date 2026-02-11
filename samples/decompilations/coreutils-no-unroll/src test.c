
bool binop(char *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = *param_1;
  if ((cVar1 != '=') || (bVar3 = true, param_1[1] != '\0')) {
    if ((*param_1 == '!') && ((param_1[1] == '=' && (param_1[2] == '\0')))) {
      return true;
    }
    if (((*param_1 != '=') || (param_1[1] != '=')) || (bVar3 = true, param_1[2] != '\0')) {
      bVar3 = true;
      iVar2 = strcmp(param_1,"-nt");
      if (((iVar2 != 0) && ((cVar1 != '>' || (param_1[1] != '\0')))) &&
         ((cVar1 != '<' || (bVar3 = true, param_1[1] != '\0')))) {
        bVar3 = true;
        iVar2 = strcmp(param_1,"-ot");
        if ((((iVar2 != 0) && (iVar2 = strcmp(param_1,"-ef"), iVar2 != 0)) &&
            ((iVar2 = strcmp(param_1,"-eq"), iVar2 != 0 &&
             (((iVar2 = strcmp(param_1,"-ne"), iVar2 != 0 &&
               (iVar2 = strcmp(param_1,"-lt"), iVar2 != 0)) &&
              (iVar2 = strcmp(param_1,"-le"), iVar2 != 0)))))) &&
           (iVar2 = strcmp(param_1,"-gt"), iVar2 != 0)) {
          iVar2 = strcmp(param_1,"-ge");
          bVar3 = iVar2 == 0;
        }
      }
    }
  }
  return bVar3;
}



byte * find_int(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  ushort *puVar3;
  ushort **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  ppuVar4 = __ctype_b_loc();
  bVar1 = *param_1;
  puVar3 = *ppuVar4;
  bVar2 = *(byte *)((long)puVar3 + (ulong)bVar1 * 2 + 1);
  pbVar8 = param_1;
  while ((bVar2 & 0x20) != 0) {
    bVar1 = pbVar8[1];
    pbVar8 = pbVar8 + 1;
    bVar2 = *(byte *)((long)puVar3 + (ulong)bVar1 * 2 + 1);
  }
  if (bVar1 == 0x2b) {
    pbVar7 = pbVar8 + 1;
    pbVar8 = pbVar7;
  }
  else {
    pbVar7 = pbVar8 + (bVar1 == 0x2d);
  }
  if ((int)(char)*pbVar7 - 0x30U < 10) {
    bVar1 = pbVar7[1];
    pbVar7 = pbVar7 + 1;
    if ((int)(char)bVar1 - 0x30U < 10) {
      do {
        bVar1 = pbVar7[1];
        pbVar7 = pbVar7 + 1;
      } while ((int)(char)bVar1 - 0x30U < 10);
      bVar2 = *(byte *)((long)puVar3 + ((ulong)(uint)(int)(char)bVar1 & 0xff) * 2 + 1);
    }
    else {
      bVar2 = *(byte *)((long)puVar3 + ((ulong)(uint)(int)(char)bVar1 & 0xff) * 2 + 1);
    }
    while ((bVar2 & 0x20) != 0) {
      bVar1 = pbVar7[1];
      pbVar7 = pbVar7 + 1;
      bVar2 = *(byte *)((long)puVar3 + (ulong)bVar1 * 2 + 1);
    }
    if (bVar1 == 0) {
      return pbVar8;
    }
  }
  uVar5 = quote(param_1);
  uVar6 = dcgettext(0,"invalid integer %s",5);
                    /* WARNING: Subroutine does not return */
  test_syntax_error(uVar6,uVar5);
}



void beyond(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = quote(*(undefined8 *)(argv + -8 + (long)argc * 8));
  uVar2 = dcgettext(0,"missing argument after %s",5);
                    /* WARNING: Subroutine does not return */
  test_syntax_error(uVar2,uVar1);
}



ulong binary_operator(uint param_1)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  char *pcVar4;
  long lVar5;
  __time_t _Var6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  size_t sVar10;
  undefined8 uVar11;
  int iVar12;
  char cVar13;
  undefined7 uVar15;
  ulong uVar14;
  long lVar16;
  long in_FS_OFFSET;
  bool bVar17;
  stat local_198;
  stat local_108;
  undefined1 local_78 [32];
  undefined1 local_58 [24];
  long local_40;
  
  lVar5 = argv;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((char)param_1 != '\0') {
    pos = pos + 1;
  }
  iVar12 = pos + 1;
  lVar16 = (long)iVar12;
  if ((((iVar12 < argc + -2) && (pcVar4 = *(char **)(argv + 8 + lVar16 * 8), *pcVar4 == '-')) &&
      (pcVar4[1] == 'l')) && (pcVar4[2] == '\0')) {
    uVar14 = 1;
    bVar17 = true;
    pos = iVar12;
  }
  else {
    uVar14 = (ulong)param_1;
    bVar17 = false;
  }
  iVar12 = pos;
  pcVar4 = *(char **)(argv + lVar16 * 8);
  lVar1 = lVar16 * 8;
  uVar15 = (undefined7)(uVar14 >> 8);
  if (*pcVar4 != '-') {
    if ((*pcVar4 == '=') && ((pcVar4[1] == '\0' || ((pcVar4[1] == '=' && (pcVar4[2] == '\0')))))) {
      iVar7 = strcmp(*(char **)(argv + -0x10 + ((long)pos + 2) * 8),
                     *(char **)(argv + ((long)pos + 2) * 8));
      uVar14 = CONCAT71(uVar15,iVar7 == 0);
      pos = iVar12 + 3;
    }
    else if (((*pcVar4 == '!') && (pcVar4[1] == '=')) && (pcVar4[2] == '\0')) {
      iVar7 = strcmp(*(char **)(argv + -0x10 + ((long)pos + 2) * 8),
                     *(char **)(argv + ((long)pos + 2) * 8));
      uVar14 = CONCAT71(uVar15,iVar7 != 0);
      pos = iVar12 + 3;
    }
    else if ((*pcVar4 == '>') && (pcVar4[1] == '\0')) {
      iVar7 = strcoll(*(char **)(argv + -0x10 + ((long)pos + 2) * 8),
                      *(char **)(argv + ((long)pos + 2) * 8));
      uVar14 = CONCAT71(uVar15,0 < iVar7);
      pos = iVar12 + 3;
    }
    else {
      if ((*pcVar4 != '<') || (pcVar4[1] != '\0')) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("0","src/test.c",0x186,"binary_operator");
      }
      iVar12 = pos + 3;
      uVar8 = strcoll(*(char **)(argv + -0x10 + ((long)pos + 2) * 8),
                      *(char **)(argv + ((long)pos + 2) * 8));
      uVar14 = (ulong)(uVar8 >> 0x1f);
      pos = iVar12;
    }
    goto LAB_001003c0;
  }
  cVar3 = pcVar4[1];
  if ((cVar3 == 'l') || (cVar3 == 'g')) {
    if ((pcVar4[2] != 't') && (pcVar4[2] != 'e')) goto LAB_0010059e;
  }
  else {
    cVar13 = (char)uVar14;
    if (cVar3 == 'e') {
      if (pcVar4[2] != 'q') {
        if ((pcVar4[2] != 'f') || (pcVar4[3] != '\0')) goto LAB_0010059e;
        pos = pos + 3;
        if (cVar13 != '\0') {
          uVar11 = dcgettext(0,"-ef does not accept -l",5);
                    /* WARNING: Subroutine does not return */
          test_syntax_error(uVar11);
        }
        iVar12 = stat(*(char **)(argv + -8 + lVar1),&local_198);
        if (((iVar12 == 0) && (iVar12 = stat(*(char **)(lVar5 + 8 + lVar1),&local_108), iVar12 == 0)
            ) && (local_198.st_dev == local_108.st_dev)) {
          uVar14 = CONCAT71(uVar15,local_198.st_ino == local_108.st_ino);
        }
        goto LAB_001003c0;
      }
    }
    else {
      if (cVar3 != 'n') {
        if (((cVar3 == 'o') && (pcVar4[2] == 't')) && (pcVar4[3] == '\0')) {
          pos = pos + 3;
          if (cVar13 != '\0') {
            uVar11 = dcgettext(0,"-ot does not accept -l",5);
                    /* WARNING: Subroutine does not return */
            test_syntax_error(uVar11);
          }
          iVar12 = stat(*(char **)(argv + -8 + lVar1),&local_108);
          lVar16 = local_108.st_mtim.tv_nsec;
          _Var6 = local_108.st_mtim.tv_sec;
          puVar2 = (undefined8 *)(lVar5 + 8 + lVar1);
          if (iVar12 == 0) {
            iVar12 = stat((char *)*puVar2,&local_108);
            if (iVar12 == 0) {
              uVar14 = (ulong)(((uint)(local_108.st_mtim.tv_nsec < lVar16) -
                               (uint)(lVar16 < local_108.st_mtim.tv_nsec)) +
                               ((uint)(local_108.st_mtim.tv_sec < _Var6) -
                               (uint)(_Var6 < local_108.st_mtim.tv_sec)) * 2 >> 0x1f);
            }
          }
          else {
            iVar12 = stat((char *)*puVar2,&local_108);
            uVar14 = CONCAT71(uVar15,iVar12 == 0);
          }
          goto LAB_001003c0;
        }
        goto LAB_0010059e;
      }
      if (pcVar4[2] != 'e') {
        if ((pcVar4[2] != 't') || (pcVar4[3] != '\0')) goto LAB_0010059e;
        pos = pos + 3;
        if (cVar13 != '\0') {
          uVar11 = dcgettext(0,"-nt does not accept -l",5);
                    /* WARNING: Subroutine does not return */
          test_syntax_error(uVar11);
        }
        iVar12 = stat(*(char **)(argv + -8 + lVar1),&local_108);
        lVar16 = local_108.st_mtim.tv_nsec;
        _Var6 = local_108.st_mtim.tv_sec;
        puVar2 = (undefined8 *)(lVar5 + 8 + lVar1);
        if (iVar12 == 0) {
          iVar7 = stat((char *)*puVar2,&local_108);
          uVar14 = _Var6;
          if (iVar7 == 0) {
            uVar14 = CONCAT71((int7)((ulong)_Var6 >> 8),
                              0 < (int)(((uint)(local_108.st_mtim.tv_nsec < lVar16) -
                                        (uint)(lVar16 < local_108.st_mtim.tv_nsec)) +
                                       ((uint)(local_108.st_mtim.tv_sec < _Var6) -
                                       (uint)(_Var6 < local_108.st_mtim.tv_sec)) * 2));
            goto LAB_001003c0;
          }
        }
        else {
          iVar7 = stat((char *)*puVar2,&local_108);
          if (iVar7 == 0) goto LAB_001003c0;
        }
        uVar14 = CONCAT71((int7)(uVar14 >> 8),iVar12 == 0);
        goto LAB_001003c0;
      }
    }
  }
  if (pcVar4[3] == '\0') {
    if ((char)param_1 == '\0') {
      uVar11 = find_int();
    }
    else {
      sVar10 = strlen(*(char **)(argv + -8 + lVar1));
      uVar11 = umaxtostr(sVar10,local_78);
    }
    if (bVar17) {
      sVar10 = strlen(*(char **)(argv + 0x10 + lVar1));
      uVar9 = umaxtostr(sVar10,local_58);
    }
    else {
      uVar9 = find_int(*(undefined8 *)(argv + 8 + lVar1));
    }
    iVar12 = strintcmp(uVar11,uVar9);
    lVar5 = *(long *)(argv + lVar16 * 8);
    bVar17 = *(char *)(lVar5 + 2) == 'e';
    cVar3 = *(char *)(lVar5 + 1);
    pos = pos + 3;
    if (cVar3 == 'l') {
      uVar14 = CONCAT71(uVar15,iVar12 < (int)(uint)bVar17);
    }
    else if (cVar3 == 'g') {
      uVar14 = CONCAT71(uVar15,(int)-(uint)bVar17 < iVar12);
    }
    else {
      uVar14 = CONCAT71(uVar15,(iVar12 != 0) == bVar17);
    }
LAB_001003c0:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar14 & 0xffffffff;
  }
LAB_0010059e:
  uVar11 = quote();
  uVar9 = dcgettext(0,"%s: unknown binary operator",5);
                    /* WARNING: Subroutine does not return */
  test_syntax_error(uVar9,uVar11);
}



ulong unary_operator(void)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  __gid_t _Var4;
  __uid_t _Var5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  int *piVar9;
  ulong uVar10;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  long in_FS_OFFSET;
  stat sStack_b8;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = (long)pos * 8;
  switch(*(undefined1 *)(*(long *)(argv + (long)pos * 8) + 1)) {
  case 0x47:
    if (argc <= pos + 1) {
LAB_00100fee:
      pos = pos + 1;
      beyond();
      goto LAB_00100ff3;
    }
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + -8 + (long)pos * 8),&sStack_b8);
    if (iVar3 == 0) {
      piVar9 = __errno_location();
      *piVar9 = 0;
      _Var4 = getegid();
      uVar6 = CONCAT44(extraout_var_03,_Var4);
      if (_Var4 == 0xffffffff) {
        uVar6 = 0;
        uVar8 = 0;
        if (*piVar9 != 0) break;
      }
      uVar8 = CONCAT71((int7)((ulong)uVar6 >> 8),sStack_b8.st_gid == _Var4);
    }
    else {
LAB_00100fc8:
      uVar8 = 0;
    }
    break;
  default:
    uVar6 = quote();
    uVar7 = dcgettext(0,"%s: unary operator expected",5);
                    /* WARNING: Subroutine does not return */
    test_syntax_error(uVar7,uVar6);
  case 0x4c:
  case 0x68:
    if (argc <= pos + 1) goto LAB_00100fee;
    pos = pos + 2;
    iVar3 = lstat(*(char **)(argv + -8 + (long)pos * 8),&sStack_b8);
    uVar8 = 0;
    if (iVar3 == 0) {
      uVar8 = (ulong)CONCAT31((int3)((sStack_b8.st_mode & 0xf000) >> 8),
                              (sStack_b8.st_mode & 0xf000) == 0xa000);
    }
    break;
  case 0x4e:
    if (argc <= pos + 1) goto LAB_00100fee;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + -8 + (long)pos * 8),&sStack_b8);
    if (iVar3 != 0) goto LAB_00100fc8;
    iVar3 = ((uint)(sStack_b8.st_atim.tv_nsec < sStack_b8.st_mtim.tv_nsec) -
            (uint)(sStack_b8.st_mtim.tv_nsec < sStack_b8.st_atim.tv_nsec)) +
            ((uint)(sStack_b8.st_atim.tv_sec < sStack_b8.st_mtim.tv_sec) -
            (uint)(sStack_b8.st_mtim.tv_sec < sStack_b8.st_atim.tv_sec)) * 2;
    uVar8 = (ulong)CONCAT31((int3)((uint)iVar3 >> 8),0 < iVar3);
    break;
  case 0x4f:
    if (argc <= pos + 1) goto LAB_00100fee;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + -8 + (long)pos * 8),&sStack_b8);
    if (iVar3 != 0) goto LAB_00100fc8;
    piVar9 = __errno_location();
    *piVar9 = 0;
    _Var5 = geteuid();
    uVar6 = CONCAT44(extraout_var_04,_Var5);
    if (_Var5 == 0xffffffff) {
      uVar6 = 0;
      uVar8 = 0;
      if (*piVar9 != 0) break;
    }
    uVar8 = CONCAT71((int7)((ulong)uVar6 >> 8),sStack_b8.st_uid == _Var5);
    break;
  case 0x53:
    if (argc <= pos + 1) goto LAB_00100fee;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + -8 + (long)pos * 8),&sStack_b8);
    uVar8 = 0;
    if (iVar3 == 0) {
      uVar8 = (ulong)CONCAT31((int3)((sStack_b8.st_mode & 0xf000) >> 8),
                              (sStack_b8.st_mode & 0xf000) == 0xc000);
    }
    break;
  case 0x62:
    if (argc <= pos + 1) goto LAB_00100fee;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + -8 + (long)pos * 8),&sStack_b8);
    uVar8 = 0;
    if (iVar3 == 0) {
      uVar8 = (ulong)CONCAT31((int3)((sStack_b8.st_mode & 0xf000) >> 8),
                              (sStack_b8.st_mode & 0xf000) == 0x6000);
    }
    break;
  case 99:
    if (argc <= pos + 1) goto LAB_00100fee;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + -8 + (long)pos * 8),&sStack_b8);
    uVar8 = 0;
    if (iVar3 == 0) {
      uVar8 = (ulong)CONCAT31((int3)((sStack_b8.st_mode & 0xf000) >> 8),
                              (sStack_b8.st_mode & 0xf000) == 0x2000);
    }
    break;
  case 100:
    if (argc <= pos + 1) goto LAB_00100fee;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + -8 + (long)pos * 8),&sStack_b8);
    uVar8 = 0;
    if (iVar3 == 0) {
      uVar8 = (ulong)CONCAT31((int3)((sStack_b8.st_mode & 0xf000) >> 8),
                              (sStack_b8.st_mode & 0xf000) == 0x4000);
    }
    break;
  case 0x65:
    if (argc <= pos + 1) goto LAB_00100fee;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + -8 + (long)pos * 8),&sStack_b8);
    uVar8 = CONCAT71((int7)(CONCAT44(extraout_var_00,iVar3) >> 8),iVar3 == 0);
    break;
  case 0x66:
    if (argc <= pos + 1) goto LAB_00100fee;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + -8 + (long)pos * 8),&sStack_b8);
    uVar8 = 0;
    if (iVar3 == 0) {
      uVar8 = (ulong)CONCAT31((int3)((sStack_b8.st_mode & 0xf000) >> 8),
                              (sStack_b8.st_mode & 0xf000) == 0x8000);
    }
    break;
  case 0x67:
    if (argc <= pos + 1) goto LAB_00100fee;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + -8 + (long)pos * 8),&sStack_b8);
    uVar8 = 0;
    if (iVar3 == 0) {
      uVar8 = (ulong)(sStack_b8.st_mode >> 10 & 1);
    }
    break;
  case 0x6b:
    if (argc <= pos + 1) goto LAB_00100fee;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + 8 + lVar1),&sStack_b8);
    uVar8 = 0;
    if (iVar3 == 0) {
      uVar8 = (ulong)(sStack_b8.st_mode >> 9 & 1);
    }
    break;
  case 0x6e:
    if (argc <= pos + 1) goto LAB_00100fee;
    pos = pos + 2;
    pcVar2 = *(char **)(argv + 8 + lVar1);
    uVar8 = CONCAT71((int7)((ulong)pcVar2 >> 8),*pcVar2 != '\0');
    break;
  case 0x70:
    if (argc <= pos + 1) goto LAB_00100fee;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + 8 + lVar1),&sStack_b8);
    uVar8 = 0;
    if (iVar3 == 0) {
      uVar8 = (ulong)CONCAT31((int3)((sStack_b8.st_mode & 0xf000) >> 8),
                              (sStack_b8.st_mode & 0xf000) == 0x1000);
    }
    break;
  case 0x72:
    if (argc <= pos + 1) goto LAB_00100fee;
    pos = pos + 2;
    iVar3 = euidaccess(*(char **)(argv + 8 + lVar1),4);
    uVar8 = CONCAT71((int7)(CONCAT44(extraout_var_01,iVar3) >> 8),iVar3 == 0);
    break;
  case 0x73:
    if (argc <= pos + 1) goto LAB_00100fee;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + 8 + lVar1),&sStack_b8);
    uVar8 = 0;
    if (iVar3 == 0) {
      uVar8 = (ulong)(0 < sStack_b8.st_size);
    }
    break;
  case 0x74:
    if (argc <= pos + 1) goto LAB_00100fee;
    pos = pos + 2;
    uVar6 = find_int(*(undefined8 *)(argv + 8 + lVar1));
    piVar9 = __errno_location();
    *piVar9 = 0;
    uVar10 = __isoc23_strtol(uVar6,0,10);
    uVar8 = 0;
    if ((*piVar9 != 0x22) && (uVar8 = 0, uVar10 < 0x80000000)) {
      iVar3 = isatty((int)uVar10);
      uVar8 = CONCAT71((int7)(CONCAT44(extraout_var_02,iVar3) >> 8),iVar3 != 0);
    }
    break;
  case 0x75:
    if (argc <= pos + 1) goto LAB_00100fee;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + 8 + lVar1),&sStack_b8);
    uVar8 = 0;
    if (iVar3 == 0) {
      uVar8 = (ulong)(sStack_b8.st_mode >> 0xb & 1);
    }
    break;
  case 0x77:
    if (argc <= pos + 1) goto LAB_00100fee;
    pos = pos + 2;
    iVar3 = euidaccess(*(char **)(argv + 8 + lVar1),2);
    uVar8 = CONCAT71((int7)(CONCAT44(extraout_var_05,iVar3) >> 8),iVar3 == 0);
    break;
  case 0x78:
    if (argc <= pos + 1) goto LAB_00100fee;
    pos = pos + 2;
    iVar3 = euidaccess(*(char **)(argv + 8 + lVar1),1);
    uVar8 = CONCAT71((int7)(CONCAT44(extraout_var,iVar3) >> 8),iVar3 == 0);
    break;
  case 0x7a:
    if (argc <= pos + 1) goto LAB_00100fee;
    pos = pos + 2;
    pcVar2 = *(char **)(argv + 8 + lVar1);
    uVar8 = CONCAT71((int7)((ulong)pcVar2 >> 8),*pcVar2 == '\0');
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
LAB_00100ff3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong posixtest(int param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  char *pcVar2;
  byte *pbVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint extraout_EDX;
  char *unaff_RBP;
  byte bVar12;
  char unaff_R13B;
  byte unaff_R14B;
  int iVar13;
  byte bVar14;
  uint uStack_4c;
  byte bStack_41;
  
  if (param_1 == 3) {
    uVar8 = three_arguments();
    return uVar8;
  }
  if (param_1 < 4) {
    if (param_1 == 1) {
      pcVar2 = *(char **)(argv + (long)(int)pos * 8);
      pos = pos + 1;
      return CONCAT71((int7)((ulong)pcVar2 >> 8),*pcVar2 != '\0');
    }
    if (param_1 != 2) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("0 < nargs","src/test.c",0x2a7,"posixtest");
    }
    pcVar2 = *(char **)(argv + (long)(int)pos * 8);
    if ((*pcVar2 == '!') && (pcVar2[1] == '\0')) {
      pcVar2 = *(char **)(argv + 8 + (long)(int)pos * 8);
      pos = pos + 2;
      return CONCAT71((int7)((ulong)pcVar2 >> 8),*pcVar2 == '\0');
    }
    param_4 = argv;
    if (((*pcVar2 == '-') && (pcVar2[1] != '\0')) && (pcVar2[2] == '\0')) {
      uVar8 = unary_operator();
      return uVar8;
    }
  }
  else if (param_1 == 4) {
    lVar1 = (long)(int)pos * 8;
    pbVar3 = *(byte **)(argv + (long)(int)pos * 8);
    bVar12 = *pbVar3;
    param_4 = (ulong)bVar12;
    if ((bVar12 == 0x21) && (pbVar3[1] == 0)) {
      pos = pos + 1;
      if ((int)pos < argc) {
        uVar6 = three_arguments();
        return (ulong)(uVar6 ^ 1);
      }
    }
    else {
      if ((((bVar12 != 0x28) || (pbVar3[1] != 0)) ||
          (pcVar2 = *(char **)(argv + 0x18 + lVar1), *pcVar2 != ')')) || (pcVar2[1] != '\0'))
      goto LAB_00101116;
      uVar6 = pos + 1;
      pcVar2 = *(char **)(argv + 8 + lVar1);
      if ((*pcVar2 == '!') && (pcVar2[1] == '\0')) {
        pos = pos + 3;
        pcVar2 = *(char **)(argv + 0x10 + lVar1);
        uVar8 = CONCAT71((int7)((ulong)pcVar2 >> 8),*pcVar2 == '\0');
LAB_0010119a:
        pos = pos + 1;
        return uVar8;
      }
      pos = uVar6;
      if ((*pcVar2 == '-') && ((pcVar2[1] != '\0' && (pcVar2[2] == '\0')))) {
        uVar8 = unary_operator();
        goto LAB_0010119a;
      }
    }
  }
  else {
LAB_00101116:
    if ((int)pos < argc) {
      uVar8 = or();
      return uVar8;
    }
  }
  beyond();
  bStack_41 = 0;
  iVar13 = argc;
LAB_00101220:
  uStack_4c = (uint)param_4;
  uVar8 = (ulong)pos;
  bVar12 = 1;
  if (iVar13 <= (int)pos) goto LAB_0010132e;
LAB_00101230:
  uVar8 = (ulong)(int)uVar8;
  bVar4 = false;
  unaff_R14B = 0;
  while( true ) {
    unaff_RBP = *(char **)(argv + uVar8 * 8);
    uVar6 = (uint)uVar8;
    unaff_R13B = *unaff_RBP;
    uStack_4c = (uint)param_4;
    param_5 = argv;
    if (unaff_R13B != '!') break;
    if (unaff_RBP[1] != '\0') {
      if (bVar4) {
        pos = uStack_4c;
      }
      if (3 < (int)(iVar13 - uVar6)) goto LAB_00101338;
      if (iVar13 - uVar6 == 3) goto LAB_00101376;
      goto LAB_001012b1;
    }
    uVar8 = uVar8 + 1;
    param_4 = (ulong)(uVar6 + 1);
    if (iVar13 <= (int)uVar8) {
      pos = uVar6 + 1;
      beyond();
      goto LAB_001015e8;
    }
    unaff_R14B = unaff_R14B ^ 1;
    bVar4 = true;
  }
  if (bVar4) {
    pos = uStack_4c;
  }
  if (unaff_R13B != '(') {
    if (3 < (int)(iVar13 - uVar6)) goto LAB_00101338;
    if (iVar13 - uVar6 == 3) goto LAB_00101376;
    goto LAB_001012a7;
  }
  if (unaff_RBP[1] != '\0') {
    if (3 < (int)(iVar13 - uVar6)) goto LAB_00101338;
    if (iVar13 - uVar6 == 3) {
      cVar5 = binop();
      param_4 = param_4 & 0xffffffff;
      if (cVar5 != '\0') goto LAB_00101398;
    }
LAB_001012b1:
    pos = uVar6 + 1;
    bVar14 = unaff_R13B != '\0';
LAB_001012c0:
    do {
      bVar12 = bVar12 & (bVar14 ^ unaff_R14B);
      if (iVar13 <= (int)pos) {
LAB_001013c3:
        bStack_41 = bStack_41 | bVar12;
LAB_001012f3:
        return (ulong)bStack_41;
      }
      while( true ) {
        uStack_4c = (uint)param_4;
        pcVar2 = *(char **)(argv + (long)(int)pos * 8);
        if (((*pcVar2 != '-') || (pcVar2[1] != 'a')) || (pcVar2[2] != '\0')) {
          bStack_41 = bStack_41 | bVar12;
          if (((*pcVar2 != '-') || (pcVar2[1] != 'o')) || (pcVar2[2] != '\0')) goto LAB_001012f3;
          pos = pos + 1;
          goto LAB_00101220;
        }
        pos = pos + 1;
        uVar8 = (ulong)pos;
        if ((int)pos < iVar13) goto LAB_00101230;
LAB_0010132e:
        beyond();
        uVar6 = extraout_EDX;
LAB_00101338:
        if (((*unaff_RBP == '-') && (unaff_RBP[1] == 'l')) &&
           ((unaff_RBP[2] == '\0' &&
            (cVar5 = binop(*(undefined8 *)(param_5 + 0x10 + uVar8 * 8)), cVar5 != '\0')))) {
          bVar14 = binary_operator();
          param_4 = (ulong)uStack_4c;
          iVar13 = argc;
          goto LAB_001012c0;
        }
LAB_00101376:
        cVar5 = binop();
        uVar8 = (ulong)uVar6;
        param_4 = (ulong)uStack_4c;
        if (cVar5 == '\0') break;
LAB_00101398:
        bVar14 = binary_operator();
        param_4 = (ulong)uStack_4c;
        bVar12 = bVar12 & (bVar14 ^ unaff_R14B);
        iVar13 = argc;
        if (argc <= (int)pos) goto LAB_001013c3;
      }
LAB_001012a7:
      uVar6 = (uint)uVar8;
      if (((unaff_R13B != '-') || (unaff_RBP[1] == '\0')) || (unaff_RBP[2] != '\0'))
      goto LAB_001012b1;
      bVar14 = unary_operator();
      param_4 = param_4 & 0xffffffff;
      iVar13 = argc;
    } while( true );
  }
  pos = uVar6 + 1;
  if (iVar13 <= (int)pos) goto LAB_0010132e;
  iVar7 = uVar6 + 2;
  if (iVar7 < iVar13) {
    lVar1 = (long)iVar7 * 8;
    pcVar2 = *(char **)(argv + (long)iVar7 * 8);
    if ((*pcVar2 != ')') || (pcVar2[1] != '\0')) {
      if (((int)(uVar6 + 3) < iVar13) &&
         ((pcVar2 = *(char **)(argv + 8 + lVar1), *pcVar2 != ')' || (pcVar2[1] != '\0')))) {
        if (((int)(uVar6 + 4) < iVar13) &&
           ((pcVar2 = *(char **)(argv + 0x10 + lVar1), *pcVar2 != ')' || (pcVar2[1] != '\0')))) {
          if (((int)(uVar6 + 5) < iVar13) &&
             ((pcVar2 = *(char **)(argv + 0x18 + lVar1), *pcVar2 != ')' || (pcVar2[1] != '\0')))) {
            iVar13 = iVar13 - pos;
          }
          else {
            iVar13 = 4;
          }
        }
        else {
          iVar13 = 3;
        }
      }
      else {
        iVar13 = 2;
      }
      goto LAB_00101478;
    }
  }
  iVar13 = 1;
LAB_00101478:
  bVar14 = posixtest(iVar13);
  param_4 = param_4 & 0xffffffff;
  pcVar2 = *(char **)(argv + (long)(int)pos * 8);
  if (pcVar2 == (char *)0x0) {
    uVar9 = quote(&_LC20);
    uVar10 = dcgettext(0,"%s expected",5);
                    /* WARNING: Subroutine does not return */
    test_syntax_error(uVar10,uVar9);
  }
  if ((*pcVar2 == ')') && (pcVar2[1] == '\0')) {
    pos = pos + 1;
    iVar13 = argc;
    goto LAB_001012c0;
  }
LAB_001015e8:
  uVar9 = quote_n(1);
  uVar10 = quote_n(0,&_LC20);
  uVar11 = dcgettext(0,"%s expected, found %s",5);
                    /* WARNING: Subroutine does not return */
  test_syntax_error(uVar11,uVar10,uVar9);
}



byte or(void)

{
  long lVar1;
  char *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong in_RCX;
  uint extraout_EDX;
  uint uVar9;
  ulong uVar10;
  char *unaff_RBP;
  long in_R8;
  byte bVar11;
  char unaff_R13B;
  byte unaff_R14B;
  int iVar12;
  byte bVar13;
  uint local_44;
  byte local_39;
  
  local_39 = 0;
  iVar12 = argc;
LAB_00101220:
  uVar10 = (ulong)pos;
  bVar11 = 1;
  if (iVar12 <= (int)pos) goto LAB_0010132e;
LAB_00101230:
  uVar10 = (ulong)(int)uVar10;
  bVar3 = false;
  unaff_R14B = 0;
  while( true ) {
    unaff_RBP = *(char **)(argv + uVar10 * 8);
    uVar9 = (uint)uVar10;
    unaff_R13B = *unaff_RBP;
    local_44 = (uint)in_RCX;
    in_R8 = argv;
    if (unaff_R13B != '!') break;
    if (unaff_RBP[1] != '\0') {
      if (bVar3) {
        pos = local_44;
      }
      if (3 < (int)(iVar12 - uVar9)) goto LAB_00101338;
      if (iVar12 - uVar9 == 3) goto LAB_00101376;
      goto LAB_001012b1;
    }
    uVar10 = uVar10 + 1;
    in_RCX = (ulong)(uVar9 + 1);
    if (iVar12 <= (int)uVar10) {
      pos = uVar9 + 1;
      beyond();
      goto LAB_001015e8;
    }
    unaff_R14B = unaff_R14B ^ 1;
    bVar3 = true;
  }
  if (bVar3) {
    pos = local_44;
  }
  if (unaff_R13B != '(') {
    if (3 < (int)(iVar12 - uVar9)) goto LAB_00101338;
    if (iVar12 - uVar9 == 3) goto LAB_00101376;
    goto LAB_001012a7;
  }
  if (unaff_RBP[1] != '\0') {
    if (3 < (int)(iVar12 - uVar9)) goto LAB_00101338;
    if (iVar12 - uVar9 == 3) {
      cVar4 = binop();
      in_RCX = in_RCX & 0xffffffff;
      if (cVar4 != '\0') goto LAB_00101398;
    }
LAB_001012b1:
    pos = uVar9 + 1;
    bVar13 = unaff_R13B != '\0';
LAB_001012c0:
    do {
      bVar11 = bVar11 & (bVar13 ^ unaff_R14B);
      if (iVar12 <= (int)pos) {
LAB_001013c3:
        return local_39 | bVar11;
      }
      while( true ) {
        pcVar2 = *(char **)(argv + (long)(int)pos * 8);
        if (((*pcVar2 != '-') || (pcVar2[1] != 'a')) || (pcVar2[2] != '\0')) {
          local_39 = local_39 | bVar11;
          if (*pcVar2 != '-') {
            return local_39;
          }
          if (pcVar2[1] != 'o') {
            return local_39;
          }
          if (pcVar2[2] != '\0') {
            return local_39;
          }
          pos = pos + 1;
          goto LAB_00101220;
        }
        pos = pos + 1;
        uVar10 = (ulong)pos;
        if ((int)pos < iVar12) goto LAB_00101230;
LAB_0010132e:
        beyond();
        uVar9 = extraout_EDX;
LAB_00101338:
        local_44 = (uint)in_RCX;
        if (((*unaff_RBP == '-') && (unaff_RBP[1] == 'l')) &&
           ((unaff_RBP[2] == '\0' &&
            (cVar4 = binop(*(undefined8 *)(in_R8 + 0x10 + uVar10 * 8)), cVar4 != '\0')))) {
          bVar13 = binary_operator();
          in_RCX = in_RCX & 0xffffffff;
          iVar12 = argc;
          goto LAB_001012c0;
        }
LAB_00101376:
        cVar4 = binop();
        uVar10 = (ulong)uVar9;
        in_RCX = (ulong)local_44;
        if (cVar4 == '\0') break;
LAB_00101398:
        bVar13 = binary_operator();
        in_RCX = (ulong)local_44;
        bVar11 = bVar11 & (bVar13 ^ unaff_R14B);
        iVar12 = argc;
        if (argc <= (int)pos) goto LAB_001013c3;
      }
LAB_001012a7:
      uVar9 = (uint)uVar10;
      if (((unaff_R13B != '-') || (unaff_RBP[1] == '\0')) || (unaff_RBP[2] != '\0'))
      goto LAB_001012b1;
      bVar13 = unary_operator();
      in_RCX = in_RCX & 0xffffffff;
      iVar12 = argc;
    } while( true );
  }
  pos = uVar9 + 1;
  if (iVar12 <= (int)pos) goto LAB_0010132e;
  iVar5 = uVar9 + 2;
  if (iVar5 < iVar12) {
    lVar1 = (long)iVar5 * 8;
    pcVar2 = *(char **)(argv + (long)iVar5 * 8);
    if ((*pcVar2 != ')') || (pcVar2[1] != '\0')) {
      if (((int)(uVar9 + 3) < iVar12) &&
         ((pcVar2 = *(char **)(argv + 8 + lVar1), *pcVar2 != ')' || (pcVar2[1] != '\0')))) {
        if (((int)(uVar9 + 4) < iVar12) &&
           ((pcVar2 = *(char **)(argv + 0x10 + lVar1), *pcVar2 != ')' || (pcVar2[1] != '\0')))) {
          if (((int)(uVar9 + 5) < iVar12) &&
             ((pcVar2 = *(char **)(argv + 0x18 + lVar1), *pcVar2 != ')' || (pcVar2[1] != '\0')))) {
            iVar12 = iVar12 - pos;
          }
          else {
            iVar12 = 4;
          }
        }
        else {
          iVar12 = 3;
        }
      }
      else {
        iVar12 = 2;
      }
      goto LAB_00101478;
    }
  }
  iVar12 = 1;
LAB_00101478:
  bVar13 = posixtest(iVar12);
  in_RCX = in_RCX & 0xffffffff;
  pcVar2 = *(char **)(argv + (long)(int)pos * 8);
  if (pcVar2 == (char *)0x0) {
    uVar6 = quote(&_LC20);
    uVar7 = dcgettext(0,"%s expected",5);
                    /* WARNING: Subroutine does not return */
    test_syntax_error(uVar7,uVar6);
  }
  if ((*pcVar2 == ')') && (pcVar2[1] == '\0')) {
    pos = pos + 1;
    iVar12 = argc;
    goto LAB_001012c0;
  }
LAB_001015e8:
  uVar6 = quote_n(1);
  uVar7 = quote_n(0,&_LC20);
  uVar8 = dcgettext(0,"%s expected, found %s",5);
                    /* WARNING: Subroutine does not return */
  test_syntax_error(uVar8,uVar7,uVar6);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong three_arguments(void)

{
  long lVar1;
  long lVar2;
  FILE *pFVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  int __status;
  undefined *puVar14;
  long in_FS_OFFSET;
  undefined *puStack_d0;
  char *pcStack_c8;
  char *apcStack_c0 [4];
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_58;
  char *pcStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  char *pcVar13;
  
  iVar6 = pos;
  lVar2 = argv;
  lVar7 = (long)pos;
  pcVar10 = *(char **)(argv + (lVar7 + 1) * 8);
  lVar1 = (lVar7 + 1) * 8;
  pcVar13 = pcVar10;
  cVar4 = binop();
  __status = (int)pcVar13;
  if (cVar4 != '\0') {
    uVar8 = binary_operator(0);
    return uVar8;
  }
  pcVar13 = *(char **)(lVar2 + -8 + lVar1);
  if ((*pcVar13 == '!') && (pcVar13[1] == '\0')) {
    pos = iVar6 + 1;
    if (pos < argc) {
      if ((*pcVar10 == '!') && (pcVar10[1] == '\0')) {
        pcVar10 = *(char **)(lVar2 + 8 + lVar1);
        pos = iVar6 + 3;
        uVar5 = (uint)CONCAT71((int7)((ulong)pcVar10 >> 8),*pcVar10 == '\0');
LAB_001017d6:
        return (ulong)(uVar5 ^ 1);
      }
      if (((*pcVar10 == '-') && (pcVar10[1] != '\0')) && (pcVar10[2] == '\0')) {
        uVar5 = unary_operator();
        goto LAB_001017d6;
      }
    }
  }
  else {
    if ((*pcVar13 == '(') &&
       (((pcVar13[1] == '\0' && (pcVar13 = *(char **)(lVar2 + 8 + lVar1), *pcVar13 == ')')) &&
        (pcVar13[1] == '\0')))) {
      pos = iVar6 + 3;
      return CONCAT71((int7)((ulong)pcVar13 >> 8),*pcVar10 != '\0');
    }
    if ((((*pcVar10 != '-') ||
         (((pcVar10[1] != 'a' || (pcVar10[2] != '\0')) &&
          ((pcVar10[1] != 'o' || (pcVar10[2] != '\0')))))) &&
        ((*pcVar10 != '>' || (pcVar10[1] != '\0')))) && ((*pcVar10 != '<' || (pcVar10[1] != '\0'))))
    {
      uVar11 = quote(pcVar10);
      uVar9 = dcgettext(0,"%s: binary operator expected",5);
                    /* WARNING: Subroutine does not return */
      test_syntax_error(uVar9,uVar11);
    }
    if (iVar6 < argc) {
      uVar8 = or();
      return uVar8;
    }
  }
  beyond();
  pFVar3 = _stdout;
  uVar11 = _program_name;
  lStack_40 = lVar2;
  ppuVar12 = &puStack_d0;
  uStack_58 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  pcStack_50 = pcVar10;
  lStack_48 = lVar7;
  lStack_38 = lVar1;
  if (__status != 0) {
    uVar9 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar9,uVar11);
    goto LAB_0010188a;
  }
  pcVar10 = (char *)dcgettext(0,
                              "Usage: test EXPRESSION\n  or:  test\n  or:  [ EXPRESSION ]\n  or:  [ ]\n  or:  [ OPTION\n"
                              ,5);
  fputs_unlocked(pcVar10,pFVar3);
  pFVar3 = _stdout;
  pcVar10 = (char *)dcgettext(0,"Exit with the status determined by EXPRESSION.\n\n",5);
  fputs_unlocked(pcVar10,pFVar3);
  pFVar3 = _stdout;
  pcVar10 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar10,pFVar3);
  pFVar3 = _stdout;
  pcVar10 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar10,pFVar3);
  pFVar3 = _stdout;
  pcVar10 = (char *)dcgettext(0,
                              "\nAn omitted EXPRESSION defaults to false.  Otherwise,\nEXPRESSION is true or false and sets exit status.  It is one of:\n"
                              ,5);
  fputs_unlocked(pcVar10,pFVar3);
  pFVar3 = _stdout;
  pcVar10 = (char *)dcgettext(0,
                              "\n  ( EXPRESSION )               EXPRESSION is true\n  ! EXPRESSION                 EXPRESSION is false\n  EXPRESSION1 -a EXPRESSION2   both EXPRESSION1 and EXPRESSION2 are true\n  EXPRESSION1 -o EXPRESSION2   either EXPRESSION1 or EXPRESSION2 is true\n"
                              ,5);
  fputs_unlocked(pcVar10,pFVar3);
  pFVar3 = _stdout;
  pcVar10 = (char *)dcgettext(0,
                              "\n  -n STRING            the length of STRING is nonzero\n  STRING               equivalent to -n STRING\n  -z STRING            the length of STRING is zero\n  STRING1 = STRING2    the strings are equal\n  STRING1 != STRING2   the strings are not equal\n  STRING1 > STRING2    STRING1 is greater than STRING2 in the current locale\n  STRING1 < STRING2    STRING1 is less than STRING2 in the current locale\n"
                              ,5);
  fputs_unlocked(pcVar10,pFVar3);
  pFVar3 = _stdout;
  pcVar10 = (char *)dcgettext(0,
                              "\n  INTEGER1 -eq INTEGER2   INTEGER1 is equal to INTEGER2\n  INTEGER1 -ge INTEGER2   INTEGER1 is greater than or equal to INTEGER2\n  INTEGER1 -gt INTEGER2   INTEGER1 is greater than INTEGER2\n  INTEGER1 -le INTEGER2   INTEGER1 is less than or equal to INTEGER2\n  INTEGER1 -lt INTEGER2   INTEGER1 is less than INTEGER2\n  INTEGER1 -ne INTEGER2   INTEGER1 is not equal to INTEGER2\n"
                              ,5);
  fputs_unlocked(pcVar10,pFVar3);
  pFVar3 = _stdout;
  pcVar10 = (char *)dcgettext(0,
                              "\n  FILE1 -ef FILE2   FILE1 and FILE2 have the same device and inode numbers\n  FILE1 -nt FILE2   FILE1 is newer (modification date) than FILE2\n  FILE1 -ot FILE2   FILE1 is older than FILE2\n"
                              ,5);
  fputs_unlocked(pcVar10,pFVar3);
  pFVar3 = _stdout;
  pcVar10 = (char *)dcgettext(0,
                              "\n  -b FILE     FILE exists and is block special\n  -c FILE     FILE exists and is character special\n  -d FILE     FILE exists and is a directory\n  -e FILE     FILE exists\n"
                              ,5);
  fputs_unlocked(pcVar10,pFVar3);
  pFVar3 = _stdout;
  pcVar10 = (char *)dcgettext(0,
                              "  -f FILE     FILE exists and is a regular file\n  -g FILE     FILE exists and is set-group-ID\n  -G FILE     FILE exists and is owned by the effective group ID\n  -h FILE     FILE exists and is a symbolic link (same as -L)\n  -k FILE     FILE exists and has its sticky bit set\n"
                              ,5);
  fputs_unlocked(pcVar10,pFVar3);
  pFVar3 = _stdout;
  pcVar10 = (char *)dcgettext(0,
                              "  -L FILE     FILE exists and is a symbolic link (same as -h)\n  -N FILE     FILE exists and has been modified since it was last read\n  -O FILE     FILE exists and is owned by the effective user ID\n  -p FILE     FILE exists and is a named pipe\n  -r FILE     FILE exists and the user has read access\n  -s FILE     FILE exists and has a size greater than zero\n"
                              ,5);
  fputs_unlocked(pcVar10,pFVar3);
  pFVar3 = _stdout;
  pcVar10 = (char *)dcgettext(0,
                              "  -S FILE     FILE exists and is a socket\n  -t FD       file descriptor FD is opened on a terminal\n  -u FILE     FILE exists and its set-user-ID bit is set\n  -w FILE     FILE exists and the user has write access\n  -x FILE     FILE exists and the user has execute (or search) access\n"
                              ,5);
  fputs_unlocked(pcVar10,pFVar3);
  pFVar3 = _stdout;
  pcVar10 = (char *)dcgettext(0,
                              "\nExcept for -h and -L, all FILE-related tests dereference symbolic links.\nBeware that parentheses need to be escaped (e.g., by backslashes) for shells.\nINTEGER may also be -l STRING, which evaluates to the length of STRING.\n"
                              ,5);
  fputs_unlocked(pcVar10,pFVar3);
  pFVar3 = _stdout;
  pcVar10 = (char *)dcgettext(0,
                              "\nBinary -a and -o are ambiguous.  Use \'test EXPR1 && test EXPR2\'\nor \'test EXPR1 || test EXPR2\' instead.\n"
                              ,5);
  fputs_unlocked(pcVar10,pFVar3);
  pFVar3 = _stdout;
  pcVar10 = (char *)dcgettext(0,
                              "\n\'[\' honors --help and --version, but \'test\' treats them as STRINGs.\n"
                              ,5);
  fputs_unlocked(pcVar10,pFVar3);
  uVar11 = dcgettext(0,"test and/or [",5);
  uVar9 = dcgettext(0,
                    "\nYour shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                    ,5);
  __printf_chk(2,uVar9,uVar11);
  pcVar10 = "[";
  puStack_d0 = &_LC24;
  pcStack_c8 = "test invocation";
  apcStack_c0[0] = "coreutils";
  apcStack_c0[1] = "Multi-call invocation";
  apcStack_c0[2] = "sha224sum";
  apcStack_c0[3] = "sha2 utilities";
  pcStack_a0 = "sha256sum";
  pcStack_98 = "sha2 utilities";
  pcStack_90 = "sha384sum";
  pcStack_88 = "sha2 utilities";
  pcStack_80 = "sha512sum";
  pcStack_78 = "sha2 utilities";
  auStack_70 = (undefined1  [16])0x0;
  do {
    iVar6 = strcmp("test",pcVar10);
    if (iVar6 == 0) break;
    pcVar10 = *(char **)((long)ppuVar12 + 0x10);
    ppuVar12 = (undefined **)((long)ppuVar12 + 0x10);
  } while (pcVar10 != (char *)0x0);
  puVar14 = *(undefined **)((long)ppuVar12 + 8);
  if (puVar14 == (undefined *)0x0) {
    uVar11 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar14 = &_LC25;
    __printf_chk(2,uVar11,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar10 = setlocale(5,(char *)0x0);
    if (pcVar10 != (char *)0x0) goto LAB_00101c45;
    uVar11 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar10 = " invocation";
    __printf_chk(2,uVar11,"https://www.gnu.org/software/coreutils/",&_LC25);
  }
  else {
    uVar11 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar11,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar10 = setlocale(5,(char *)0x0);
    if (pcVar10 != (char *)0x0) {
LAB_00101c45:
      iVar6 = strncmp(pcVar10,"en_",3);
      pFVar3 = _stdout;
      if (iVar6 != 0) {
        pcVar10 = (char *)dcgettext(0,
                                    "Report any translation bugs to <https://translationproject.org/team/>\n"
                                    ,5);
        fputs_unlocked(pcVar10,pFVar3);
      }
    }
    uVar11 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar10 = "";
    __printf_chk(2,uVar11,"https://www.gnu.org/software/coreutils/",&_LC25);
    if (puVar14 == &_LC25) {
      pcVar10 = " invocation";
    }
  }
  uVar11 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar11,puVar14,pcVar10);
LAB_0010188a:
                    /* WARNING: Subroutine does not return */
  exit(__status);
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
  
  pFVar1 = _stdout;
  uVar5 = _program_name;
  ppuVar6 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_0010188a;
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
  local_a8 = &_LC24;
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
    iVar2 = strcmp("test",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC25;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_00101c45;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC25);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00101c45:
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
LAB_0010188a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



void test_syntax_error(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12
                      ,undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
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
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_d8 = 8;
  local_d4 = 0x30;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  verror(0,0,param_9,&local_d8);
                    /* WARNING: Subroutine does not return */
  exit(2);
}



void binary_operator_cold(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"-ot does not accept -l",5);
                    /* WARNING: Subroutine does not return */
  test_syntax_error(uVar1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  _exit_failure = 2;
  atexit((__func *)&close_stdout);
  pos = 1;
  argv = param_2;
  argc = param_1;
  if (param_1 < 2) {
    bVar1 = 1;
  }
  else {
    bVar1 = posixtest(param_1 + -1);
    if (pos != argc) {
      uVar2 = quote(argv[pos]);
      uVar3 = dcgettext(0,"extra argument %s",5);
                    /* WARNING: Subroutine does not return */
      test_syntax_error(uVar3,uVar2);
    }
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}


