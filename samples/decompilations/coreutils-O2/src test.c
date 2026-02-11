
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



ulong binary_operator(byte param_1)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  char *pcVar4;
  long lVar5;
  __time_t _Var6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  size_t sVar11;
  undefined8 uVar12;
  byte bVar13;
  ulong uVar14;
  long lVar15;
  long in_FS_OFFSET;
  bool bVar16;
  stat local_188;
  stat local_f8;
  undefined1 local_68 [32];
  undefined1 local_48 [24];
  long local_30;
  
  lVar5 = argv;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    pos = pos + 1;
  }
  iVar7 = pos + 1;
  bVar13 = 0;
  lVar15 = (long)iVar7;
  if (iVar7 < argc + -2) {
    pcVar4 = *(char **)(argv + 8 + lVar15 * 8);
    if (((*pcVar4 == '-') && (pcVar4[1] == 'l')) && (pcVar4[2] == '\0')) {
      bVar13 = 1;
      pos = iVar7;
    }
    else {
      bVar13 = 0;
    }
  }
  iVar7 = pos;
  pcVar4 = *(char **)(argv + lVar15 * 8);
  lVar1 = lVar15 * 8;
  if (*pcVar4 != '-') {
    if ((*pcVar4 == '=') && ((pcVar4[1] == '\0' || ((pcVar4[1] == '=' && (pcVar4[2] == '\0')))))) {
      iVar8 = strcmp(*(char **)(argv + -0x10 + ((long)pos + 2) * 8),
                     *(char **)(argv + ((long)pos + 2) * 8));
      uVar14 = (ulong)(iVar8 == 0);
      pos = iVar7 + 3;
    }
    else if (((*pcVar4 == '!') && (pcVar4[1] == '=')) && (pcVar4[2] == '\0')) {
      iVar8 = strcmp(*(char **)(argv + -0x10 + ((long)pos + 2) * 8),
                     *(char **)(argv + ((long)pos + 2) * 8));
      uVar14 = (ulong)(iVar8 != 0);
      pos = iVar7 + 3;
    }
    else if ((*pcVar4 == '>') && (pcVar4[1] == '\0')) {
      iVar8 = strcoll(*(char **)(argv + -0x10 + ((long)pos + 2) * 8),
                      *(char **)(argv + ((long)pos + 2) * 8));
      uVar14 = (ulong)(0 < iVar8);
      pos = iVar7 + 3;
    }
    else {
      if ((*pcVar4 != '<') || (pcVar4[1] != '\0')) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("0","src/test.c",0x186,"binary_operator");
      }
      iVar7 = pos + 3;
      uVar9 = strcoll(*(char **)(argv + -0x10 + ((long)pos + 2) * 8),
                      *(char **)(argv + ((long)pos + 2) * 8));
      uVar14 = (ulong)(uVar9 >> 0x1f);
      pos = iVar7;
    }
    goto LAB_001003b8;
  }
  cVar3 = pcVar4[1];
  if ((cVar3 == 'l') || (cVar3 == 'g')) {
    if ((pcVar4[2] != 't') && (pcVar4[2] != 'e')) goto LAB_001005bc;
  }
  else if (cVar3 == 'e') {
    if (pcVar4[2] != 'q') {
      if ((pcVar4[2] != 'f') || (pcVar4[3] != '\0')) goto LAB_001005bc;
      pos = pos + 3;
      uVar14 = (ulong)(bVar13 | param_1);
      if ((bVar13 | param_1) != 0) {
        uVar12 = dcgettext(0,"-ef does not accept -l",5);
                    /* WARNING: Subroutine does not return */
        test_syntax_error(uVar12);
      }
      iVar7 = stat(*(char **)(argv + -8 + lVar1),&local_188);
      if (((iVar7 == 0) && (iVar7 = stat(*(char **)(lVar5 + 8 + lVar1),&local_f8), iVar7 == 0)) &&
         (local_188.st_dev == local_f8.st_dev)) {
        uVar14 = (ulong)(local_188.st_ino == local_f8.st_ino);
      }
      goto LAB_001003b8;
    }
  }
  else {
    if (cVar3 != 'n') {
      if (((cVar3 == 'o') && (pcVar4[2] == 't')) && (pcVar4[3] == '\0')) {
        pos = pos + 3;
        uVar14 = (ulong)(bVar13 | param_1);
        if ((bVar13 | param_1) != 0) {
          uVar12 = dcgettext(0,"-ot does not accept -l",5);
                    /* WARNING: Subroutine does not return */
          test_syntax_error(uVar12);
        }
        iVar7 = stat(*(char **)(argv + -8 + lVar1),&local_f8);
        lVar15 = local_f8.st_mtim.tv_nsec;
        _Var6 = local_f8.st_mtim.tv_sec;
        puVar2 = (undefined8 *)(lVar5 + 8 + lVar1);
        if (iVar7 == 0) {
          iVar7 = stat((char *)*puVar2,&local_f8);
          if (iVar7 == 0) {
            uVar14 = (ulong)(((uint)(local_f8.st_mtim.tv_nsec < lVar15) -
                             (uint)(lVar15 < local_f8.st_mtim.tv_nsec)) +
                             ((uint)(local_f8.st_mtim.tv_sec < _Var6) -
                             (uint)(_Var6 < local_f8.st_mtim.tv_sec)) * 2 >> 0x1f);
          }
        }
        else {
          iVar7 = stat((char *)*puVar2,&local_f8);
          uVar14 = (ulong)(iVar7 == 0);
        }
        goto LAB_001003b8;
      }
      goto LAB_001005bc;
    }
    if (pcVar4[2] != 'e') {
      if ((pcVar4[2] != 't') || (pcVar4[3] != '\0')) goto LAB_001005bc;
      pos = pos + 3;
      uVar14 = (ulong)(bVar13 | param_1);
      if ((bVar13 | param_1) != 0) {
        uVar12 = dcgettext(0,"-nt does not accept -l",5);
                    /* WARNING: Subroutine does not return */
        test_syntax_error(uVar12);
      }
      iVar7 = stat(*(char **)(argv + -8 + lVar1),&local_f8);
      lVar15 = local_f8.st_mtim.tv_nsec;
      _Var6 = local_f8.st_mtim.tv_sec;
      puVar2 = (undefined8 *)(lVar5 + 8 + lVar1);
      if (iVar7 == 0) {
        iVar8 = stat((char *)*puVar2,&local_f8);
        uVar14 = lVar15;
        if (iVar8 == 0) {
          uVar14 = CONCAT71((int7)((ulong)lVar15 >> 8),
                            0 < (int)(((uint)(local_f8.st_mtim.tv_nsec < lVar15) -
                                      (uint)(lVar15 < local_f8.st_mtim.tv_nsec)) +
                                     ((uint)(local_f8.st_mtim.tv_sec < _Var6) -
                                     (uint)(_Var6 < local_f8.st_mtim.tv_sec)) * 2));
          goto LAB_001003b8;
        }
      }
      else {
        iVar8 = stat((char *)*puVar2,&local_f8);
        if (iVar8 == 0) goto LAB_001003b8;
      }
      uVar14 = CONCAT71((int7)(uVar14 >> 8),iVar7 == 0);
      goto LAB_001003b8;
    }
  }
  if (pcVar4[3] == '\0') {
    if (param_1 == 0) {
      uVar12 = find_int();
    }
    else {
      sVar11 = strlen(*(char **)(argv + -8 + lVar1));
      uVar12 = umaxtostr(sVar11,local_68);
    }
    if (bVar13 == 0) {
      uVar10 = find_int(*(undefined8 *)(argv + 8 + lVar1));
    }
    else {
      sVar11 = strlen(*(char **)(argv + 0x10 + lVar1));
      uVar10 = umaxtostr(sVar11,local_48);
    }
    iVar7 = strintcmp(uVar12,uVar10);
    lVar5 = *(long *)(argv + lVar15 * 8);
    bVar16 = *(char *)(lVar5 + 2) == 'e';
    cVar3 = *(char *)(lVar5 + 1);
    pos = pos + 3;
    if (cVar3 == 'l') {
      uVar14 = (ulong)(iVar7 < (int)(uint)bVar16);
    }
    else if (cVar3 == 'g') {
      uVar14 = (ulong)((int)-(uint)bVar16 < iVar7);
    }
    else {
      uVar14 = (ulong)((iVar7 != 0) == bVar16);
    }
LAB_001003b8:
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar14 & 0xffffffff;
  }
LAB_001005bc:
  uVar12 = quote();
  uVar10 = dcgettext(0,"%s: unknown binary operator",5);
                    /* WARNING: Subroutine does not return */
  test_syntax_error(uVar10,uVar12);
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
LAB_00100fde:
      pos = pos + 1;
                    /* WARNING: Subroutine does not return */
      beyond();
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
      break;
    }
    goto LAB_00100fb8;
  default:
    uVar6 = quote();
    uVar7 = dcgettext(0,"%s: unary operator expected",5);
                    /* WARNING: Subroutine does not return */
    test_syntax_error(uVar7,uVar6);
  case 0x4c:
  case 0x68:
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar3 = lstat(*(char **)(argv + -8 + (long)pos * 8),&sStack_b8);
    uVar8 = 0;
    if (iVar3 == 0) {
      uVar8 = (ulong)CONCAT31((int3)((sStack_b8.st_mode & 0xf000) >> 8),
                              (sStack_b8.st_mode & 0xf000) == 0xa000);
    }
    break;
  case 0x4e:
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + -8 + (long)pos * 8),&sStack_b8);
    if (iVar3 == 0) {
      iVar3 = ((uint)(sStack_b8.st_atim.tv_nsec < sStack_b8.st_mtim.tv_nsec) -
              (uint)(sStack_b8.st_mtim.tv_nsec < sStack_b8.st_atim.tv_nsec)) +
              ((uint)(sStack_b8.st_atim.tv_sec < sStack_b8.st_mtim.tv_sec) -
              (uint)(sStack_b8.st_mtim.tv_sec < sStack_b8.st_atim.tv_sec)) * 2;
      uVar8 = (ulong)CONCAT31((int3)((uint)iVar3 >> 8),0 < iVar3);
      break;
    }
    goto LAB_00100fb8;
  case 0x4f:
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + -8 + (long)pos * 8),&sStack_b8);
    if (iVar3 == 0) {
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
    }
LAB_00100fb8:
    uVar8 = 0;
    break;
  case 0x53:
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + -8 + (long)pos * 8),&sStack_b8);
    uVar8 = 0;
    if (iVar3 == 0) {
      uVar8 = (ulong)CONCAT31((int3)((sStack_b8.st_mode & 0xf000) >> 8),
                              (sStack_b8.st_mode & 0xf000) == 0xc000);
    }
    break;
  case 0x62:
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + -8 + (long)pos * 8),&sStack_b8);
    uVar8 = 0;
    if (iVar3 == 0) {
      uVar8 = (ulong)CONCAT31((int3)((sStack_b8.st_mode & 0xf000) >> 8),
                              (sStack_b8.st_mode & 0xf000) == 0x6000);
    }
    break;
  case 99:
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + -8 + (long)pos * 8),&sStack_b8);
    uVar8 = 0;
    if (iVar3 == 0) {
      uVar8 = (ulong)CONCAT31((int3)((sStack_b8.st_mode & 0xf000) >> 8),
                              (sStack_b8.st_mode & 0xf000) == 0x2000);
    }
    break;
  case 100:
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + -8 + (long)pos * 8),&sStack_b8);
    uVar8 = 0;
    if (iVar3 == 0) {
      uVar8 = (ulong)CONCAT31((int3)((sStack_b8.st_mode & 0xf000) >> 8),
                              (sStack_b8.st_mode & 0xf000) == 0x4000);
    }
    break;
  case 0x65:
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + -8 + (long)pos * 8),&sStack_b8);
    uVar8 = CONCAT71((int7)(CONCAT44(extraout_var_00,iVar3) >> 8),iVar3 == 0);
    break;
  case 0x66:
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + -8 + (long)pos * 8),&sStack_b8);
    uVar8 = 0;
    if (iVar3 == 0) {
      uVar8 = (ulong)CONCAT31((int3)((sStack_b8.st_mode & 0xf000) >> 8),
                              (sStack_b8.st_mode & 0xf000) == 0x8000);
    }
    break;
  case 0x67:
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + -8 + (long)pos * 8),&sStack_b8);
    uVar8 = 0;
    if (iVar3 == 0) {
      uVar8 = (ulong)(sStack_b8.st_mode >> 10 & 1);
    }
    break;
  case 0x6b:
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + 8 + lVar1),&sStack_b8);
    uVar8 = 0;
    if (iVar3 == 0) {
      uVar8 = (ulong)(sStack_b8.st_mode >> 9 & 1);
    }
    break;
  case 0x6e:
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    pcVar2 = *(char **)(argv + 8 + lVar1);
    uVar8 = CONCAT71((int7)((ulong)pcVar2 >> 8),*pcVar2 != '\0');
    break;
  case 0x70:
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + 8 + lVar1),&sStack_b8);
    uVar8 = 0;
    if (iVar3 == 0) {
      uVar8 = (ulong)CONCAT31((int3)((sStack_b8.st_mode & 0xf000) >> 8),
                              (sStack_b8.st_mode & 0xf000) == 0x1000);
    }
    break;
  case 0x72:
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar3 = euidaccess(*(char **)(argv + 8 + lVar1),4);
    uVar8 = CONCAT71((int7)(CONCAT44(extraout_var_01,iVar3) >> 8),iVar3 == 0);
    break;
  case 0x73:
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + 8 + lVar1),&sStack_b8);
    uVar8 = 0;
    if (iVar3 == 0) {
      uVar8 = (ulong)(0 < sStack_b8.st_size);
    }
    break;
  case 0x74:
    if (argc <= pos + 1) goto LAB_00100fde;
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
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar3 = stat(*(char **)(argv + 8 + lVar1),&sStack_b8);
    uVar8 = 0;
    if (iVar3 == 0) {
      uVar8 = (ulong)(sStack_b8.st_mode >> 0xb & 1);
    }
    break;
  case 0x77:
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar3 = euidaccess(*(char **)(argv + 8 + lVar1),2);
    uVar8 = CONCAT71((int7)(CONCAT44(extraout_var_05,iVar3) >> 8),iVar3 == 0);
    break;
  case 0x78:
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    iVar3 = euidaccess(*(char **)(argv + 8 + lVar1),1);
    uVar8 = CONCAT71((int7)(CONCAT44(extraout_var,iVar3) >> 8),iVar3 == 0);
    break;
  case 0x7a:
    if (argc <= pos + 1) goto LAB_00100fde;
    pos = pos + 2;
    pcVar2 = *(char **)(argv + 8 + lVar1);
    uVar8 = CONCAT71((int7)((ulong)pcVar2 >> 8),*pcVar2 == '\0');
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 two_arguments(void)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(char **)(argv + (long)pos * 8);
  if ((*pcVar1 == '!') && (pcVar1[1] == '\0')) {
    pcVar1 = *(char **)(argv + 8 + (long)pos * 8);
    pos = pos + 2;
    return CONCAT71((int7)((ulong)pcVar1 >> 8),*pcVar1 == '\0');
  }
  if ((*pcVar1 == '-') && ((pcVar1[1] != '\0' && (pcVar1[2] == '\0')))) {
    uVar2 = unary_operator();
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  beyond();
}



byte or(void)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  byte bVar12;
  int iVar13;
  int unaff_R12D;
  byte bVar14;
  byte bVar15;
  byte local_39;
  
  local_39 = 0;
  iVar9 = argc;
LAB_00101070:
  bVar12 = 1;
  if (iVar9 <= pos) {
LAB_00101185:
                    /* WARNING: Subroutine does not return */
    beyond();
  }
  do {
    uVar11 = (ulong)pos;
    bVar3 = false;
    bVar14 = 0;
    while( true ) {
      pcVar2 = *(char **)(argv + uVar11 * 8);
      iVar10 = (int)uVar11;
      cVar1 = *pcVar2;
      if (cVar1 != '!') break;
      if (pcVar2[1] != '\0') {
        if (bVar3) {
          pos = unaff_R12D;
        }
        if (3 < iVar9 - iVar10) goto LAB_00101190;
        if (iVar9 - iVar10 != 3) goto LAB_00101110;
        goto LAB_001011d1;
      }
      uVar11 = uVar11 + 1;
      unaff_R12D = iVar10 + 1;
      if (iVar9 <= (int)uVar11) {
        pos = unaff_R12D;
                    /* WARNING: Subroutine does not return */
        beyond();
      }
      bVar14 = bVar14 ^ 1;
      bVar3 = true;
    }
    if (bVar3) {
      pos = unaff_R12D;
    }
    if (cVar1 == '(') {
      if (pcVar2[1] == '\0') {
        pos = iVar10 + 1;
        if (iVar9 <= pos) goto LAB_00101185;
        if (iVar10 + 2 < iVar9) {
          iVar13 = 1;
          puVar8 = (undefined8 *)(argv + (long)(iVar10 + 2) * 8);
          do {
            if (((*(char *)*puVar8 == ')') && (((char *)*puVar8)[1] == '\0')) || (iVar13 == 4))
            break;
            iVar13 = iVar13 + 1;
            puVar8 = puVar8 + 1;
          } while (iVar13 != (iVar9 + -1) - iVar10);
        }
        bVar15 = posixtest();
        pcVar2 = *(char **)(argv + (long)pos * 8);
        if (pcVar2 == (char *)0x0) {
          uVar5 = quote(&_LC19);
          uVar6 = dcgettext(0,"%s expected",5);
                    /* WARNING: Subroutine does not return */
          test_syntax_error(uVar6,uVar5);
        }
        if ((*pcVar2 != ')') || (pcVar2[1] != '\0')) {
          uVar5 = quote_n(1,pcVar2);
          uVar6 = quote_n(0,&_LC19);
          uVar7 = dcgettext(0,"%s expected, found %s",5);
                    /* WARNING: Subroutine does not return */
          test_syntax_error(uVar7,uVar6,uVar5);
        }
        pos = pos + 1;
        iVar9 = argc;
      }
      else {
        if (3 < iVar9 - iVar10) goto LAB_00101190;
        if ((iVar9 - iVar10 == 3) && (cVar4 = binop(), cVar4 != '\0')) goto LAB_001011f3;
LAB_00101110:
        pos = iVar10 + 1;
        bVar15 = cVar1 != '\0';
      }
LAB_0010111f:
      bVar12 = bVar12 & (bVar15 ^ bVar14);
      if (iVar9 <= pos) {
LAB_00101213:
        return local_39 | bVar12;
      }
    }
    else {
      if (iVar9 - iVar10 < 4) {
        if (iVar9 - iVar10 == 3) goto LAB_001011d1;
LAB_001010f8:
        iVar10 = (int)uVar11;
        if (((cVar1 != '-') || (pcVar2[1] == '\0')) || (pcVar2[2] != '\0')) goto LAB_00101110;
        bVar15 = unary_operator();
        iVar9 = argc;
        goto LAB_0010111f;
      }
LAB_00101190:
      if ((((*pcVar2 == '-') && (pcVar2[1] == 'l')) && (pcVar2[2] == '\0')) &&
         (cVar4 = binop(*(undefined8 *)(argv + 0x10 + uVar11 * 8)), cVar4 != '\0')) {
        bVar15 = binary_operator();
        iVar9 = argc;
        goto LAB_0010111f;
      }
LAB_001011d1:
      cVar4 = binop();
      uVar11 = uVar11 & 0xffffffff;
      if (cVar4 == '\0') goto LAB_001010f8;
LAB_001011f3:
      bVar15 = binary_operator();
      bVar12 = bVar12 & (bVar15 ^ bVar14);
      iVar9 = argc;
      if (argc <= pos) goto LAB_00101213;
    }
    pcVar2 = *(char **)(argv + (long)pos * 8);
    if (((*pcVar2 != '-') || (pcVar2[1] != 'a')) || (pcVar2[2] != '\0')) break;
    pos = pos + 1;
    if (iVar9 <= pos) goto LAB_00101185;
  } while( true );
  local_39 = local_39 | bVar12;
  if (((*pcVar2 != '-') || (pcVar2[1] != 'o')) || (pcVar2[2] != '\0')) {
    return local_39;
  }
  pos = pos + 1;
  goto LAB_00101070;
}



ulong three_arguments(void)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  iVar5 = pos;
  lVar4 = argv;
  pcVar2 = *(char **)(argv + ((long)pos + 1) * 8);
  lVar1 = ((long)pos + 1) * 8;
  cVar6 = binop(pcVar2);
  if (cVar6 != '\0') {
    uVar8 = binary_operator(0);
    return uVar8;
  }
  pcVar3 = *(char **)(lVar4 + -8 + lVar1);
  if ((*pcVar3 == '!') && (pcVar3[1] == '\0')) {
    pos = iVar5 + 1;
    if (pos < argc) {
      uVar7 = two_arguments();
      return (ulong)(uVar7 ^ 1);
    }
  }
  else {
    if ((*pcVar3 == '(') &&
       (((pcVar3[1] == '\0' && (pcVar3 = *(char **)(lVar4 + 8 + lVar1), *pcVar3 == ')')) &&
        (pcVar3[1] == '\0')))) {
      pos = iVar5 + 3;
      return CONCAT71((int7)((ulong)pcVar3 >> 8),*pcVar2 != '\0');
    }
    if ((((*pcVar2 != '-') ||
         (((pcVar2[1] != 'a' || (pcVar2[2] != '\0')) && ((pcVar2[1] != 'o' || (pcVar2[2] != '\0'))))
         )) && ((*pcVar2 != '>' || (pcVar2[1] != '\0')))) &&
       ((*pcVar2 != '<' || (pcVar2[1] != '\0')))) {
      uVar9 = quote(pcVar2);
      uVar10 = dcgettext(0,"%s: binary operator expected",5);
                    /* WARNING: Subroutine does not return */
      test_syntax_error(uVar10,uVar9);
    }
    if (iVar5 < argc) {
      uVar8 = or();
      return uVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  beyond();
}



ulong posixtest(int param_1)

{
  char *pcVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_1 == 3) {
    uVar3 = three_arguments();
    return uVar3;
  }
  if (param_1 < 4) {
    if (param_1 == 1) {
      pcVar1 = *(char **)(argv + (long)pos * 8);
      pos = pos + 1;
      return CONCAT71((int7)((ulong)pcVar1 >> 8),*pcVar1 != '\0');
    }
    if (param_1 == 2) {
      uVar3 = two_arguments();
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 < nargs","src/test.c",0x2a7,"posixtest");
  }
  if (param_1 == 4) {
    pcVar1 = *(char **)(argv + (long)pos * 8);
    if ((*pcVar1 == '!') && (pcVar1[1] == '\0')) {
      pos = pos + 1;
      if (pos < argc) {
        uVar2 = three_arguments();
        return (ulong)(uVar2 ^ 1);
      }
      goto LAB_001016c4;
    }
    if ((((*pcVar1 == '(') && (pcVar1[1] == '\0')) &&
        (pcVar1 = *(char **)(argv + 0x18 + (long)pos * 8), *pcVar1 == ')')) && (pcVar1[1] == '\0'))
    {
      pos = pos + 1;
      uVar3 = two_arguments();
      pos = pos + 1;
      return uVar3;
    }
  }
  if (pos < argc) {
    uVar3 = or();
    return uVar3;
  }
LAB_001016c4:
                    /* WARNING: Subroutine does not return */
  beyond();
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


