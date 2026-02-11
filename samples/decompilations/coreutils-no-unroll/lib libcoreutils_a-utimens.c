
void lutimensat(int param_1,char *param_2,timespec *param_3)

{
  utimensat(param_1,param_2,param_3,0x100);
  return;
}



int fdutimens(int param_1,char *param_2,__time_t *param_3)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  timespec *__times;
  __time_t _Var7;
  bool bVar8;
  char cVar9;
  long in_FS_OFFSET;
  bool bVar10;
  timespec local_128;
  __time_t local_118;
  ulong uStack_110;
  timespec local_108;
  __time_t local_f8;
  long lStack_f0;
  timeval local_e8;
  __time_t local_d8;
  long lStack_d0;
  stat local_c8;
  long local_30;
  
  __times = &local_128;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (__time_t *)0x0) {
    cVar9 = '\0';
    __times = (timespec *)0x0;
LAB_00100123:
    if ((-1 < param_1) || (param_2 != (char *)0x0)) {
      if (utimensat_works_really < 0) {
        utimensat_works_really = -1;
        lutimensat_works_really = 0xffffffff;
        if (cVar9 == '\0') {
          if (__times != (timespec *)0x0) {
LAB_00100329:
            utimensat_works_really = -1;
            lutimensat_works_really = 0xffffffff;
            _Var7 = __times[1].tv_sec;
            lVar6 = __times[1].tv_nsec;
            goto LAB_00100331;
          }
LAB_00100400:
          __times = (timespec *)0x0;
        }
        else {
          if (param_1 < 0) {
LAB_00100245:
            utimensat_works_really = -1;
            lutimensat_works_really = 0xffffffff;
            iVar4 = stat(param_2,&local_c8);
          }
          else {
LAB_00100197:
            utimensat_works_really = -1;
            lutimensat_works_really = 0xffffffff;
            iVar4 = fstat(param_1,&local_c8);
          }
          if (iVar4 != 0) goto LAB_0010007e;
          if (__times == (timespec *)0x0) goto LAB_00100400;
LAB_001001b4:
          lVar2 = local_c8.st_atim.tv_nsec;
          lVar6 = __times[1].tv_nsec;
          if (__times->tv_nsec == 0x3ffffffe) {
            iVar4 = 0;
            if (lVar6 == 0x3ffffffe) goto LAB_00100088;
            __times->tv_sec = local_c8.st_atim.tv_sec;
            __times->tv_nsec = lVar2;
          }
          else {
            if (__times->tv_nsec == 0x3fffffff) {
              if (lVar6 == 0x3fffffff) goto LAB_00100400;
              gettime(__times);
              lVar6 = __times[1].tv_nsec;
            }
            lVar2 = local_c8.st_mtim.tv_nsec;
            _Var7 = local_c8.st_mtim.tv_sec;
            if (lVar6 == 0x3ffffffe) {
              __times[1].tv_sec = local_c8.st_mtim.tv_sec;
              __times[1].tv_nsec = lVar2;
              lVar6 = lVar2;
              goto LAB_00100331;
            }
          }
          if (lVar6 == 0x3fffffff) {
            gettime(__times + 1);
            _Var7 = __times[1].tv_sec;
            lVar6 = __times[1].tv_nsec;
          }
          else {
            _Var7 = __times[1].tv_sec;
          }
LAB_00100331:
          plVar1 = &__times->tv_nsec;
          local_f8 = _Var7;
          local_108.tv_sec = __times->tv_sec;
          __times = &local_108;
          local_108.tv_nsec = *plVar1 / 1000;
          lStack_f0 = lVar6 / 1000;
        }
        if (-1 < param_1) {
          iVar4 = futimesat(param_1,(char *)0x0,(timeval *)__times);
          if (iVar4 != 0) goto LAB_00100399;
          if (__times != (timespec *)0x0) {
            lVar6 = __times->tv_nsec;
            bVar3 = 499999 < __times[1].tv_nsec;
            if (((499999 < lVar6) || (bVar3)) && (iVar4 = fstat(param_1,&local_c8), iVar4 == 0)) {
              local_e8.tv_sec = __times->tv_sec;
              local_e8.tv_usec = __times->tv_nsec;
              local_d8 = __times[1].tv_sec;
              lStack_d0 = __times[1].tv_nsec;
              bVar10 = local_c8.st_mtim.tv_sec - __times[1].tv_sec == 1;
              if (((local_c8.st_atim.tv_sec - __times->tv_sec == 1) && (499999 < lVar6)) &&
                 (local_c8.st_atim.tv_nsec == 0)) {
                local_e8.tv_usec = 0;
                if ((bVar10 && bVar3) && (local_c8.st_mtim.tv_nsec == 0)) {
LAB_001005d6:
                  lStack_d0 = 0;
                }
                futimesat(param_1,(char *)0x0,&local_e8);
              }
              else if ((bVar10 && bVar3) && (local_c8.st_mtim.tv_nsec == 0)) goto LAB_001005d6;
            }
          }
LAB_001004af:
          iVar4 = 0;
          goto LAB_00100088;
        }
      }
      else {
        if (cVar9 != '\x02') {
LAB_00100148:
          if (param_1 < 0) goto LAB_001002a8;
LAB_00100150:
          iVar4 = futimens(param_1,__times);
          if (iVar4 < 1) {
            if ((iVar4 != 0) && (piVar5 = __errno_location(), *piVar5 == 0x26)) goto LAB_00100170;
            goto LAB_001003c6;
          }
          piVar5 = __errno_location();
          *piVar5 = 0x26;
LAB_00100170:
          utimensat_works_really = -1;
          lutimensat_works_really = 0xffffffff;
          if (cVar9 != '\0') {
            if (cVar9 != '\x03') goto LAB_00100197;
            if (__times == (timespec *)0x0) goto LAB_00100529;
            goto LAB_001001b4;
          }
          if (__times != (timespec *)0x0) goto LAB_00100329;
LAB_00100529:
          __times = (timespec *)0x0;
          iVar4 = futimesat(param_1,(char *)0x0,(timeval *)0x0);
          if (iVar4 == 0) goto LAB_001004af;
LAB_00100399:
          iVar4 = -1;
          if (param_2 != (char *)0x0) {
            iVar4 = utimes(param_2,(timeval *)__times);
          }
          goto LAB_00100088;
        }
        if (-1 < param_1) {
          iVar4 = fstat(param_1,&local_c8);
          if (iVar4 != 0) goto LAB_0010007e;
          if (__times->tv_nsec == 0x3ffffffe) goto LAB_001004f0;
          cVar9 = '\x03';
          if (__times[1].tv_nsec == 0x3ffffffe) goto LAB_0010044e;
          goto LAB_00100150;
        }
        iVar4 = stat(param_2,&local_c8);
        if (iVar4 != 0) goto LAB_0010007e;
        if (__times->tv_nsec == 0x3ffffffe) {
LAB_001004f0:
          lVar6 = local_c8.st_atim.tv_nsec;
          __times->tv_sec = local_c8.st_atim.tv_sec;
          __times->tv_nsec = lVar6;
LAB_001004fc:
          cVar9 = '\x03';
          goto LAB_00100148;
        }
        cVar9 = '\x03';
        if (__times[1].tv_nsec == 0x3ffffffe) {
LAB_0010044e:
          lVar6 = local_c8.st_mtim.tv_nsec;
          __times[1].tv_sec = local_c8.st_mtim.tv_sec;
          __times[1].tv_nsec = lVar6;
          goto LAB_001004fc;
        }
LAB_001002a8:
        iVar4 = utimensat(-100,param_2,__times,0);
        if (iVar4 < 1) {
          if ((iVar4 == 0) || (piVar5 = __errno_location(), *piVar5 != 0x26)) {
LAB_001003c6:
            utimensat_works_really = 1;
            goto LAB_00100088;
          }
        }
        else {
          piVar5 = __errno_location();
          *piVar5 = 0x26;
        }
        utimensat_works_really = -1;
        lutimensat_works_really = 0xffffffff;
        if (cVar9 == '\0') {
          if (__times != (timespec *)0x0) goto LAB_00100329;
        }
        else {
          if (cVar9 != '\x03') goto LAB_00100245;
          if (__times != (timespec *)0x0) goto LAB_001001b4;
        }
      }
      iVar4 = futimesat(-100,param_2,(timeval *)__times);
      goto LAB_00100088;
    }
    piVar5 = __errno_location();
    *piVar5 = 9;
  }
  else {
    local_128.tv_nsec = param_3[1];
    uStack_110 = param_3[3];
    local_128.tv_sec = *param_3;
    local_118 = param_3[2];
    if (((local_128.tv_nsec - 0x3ffffffeU < 2) || ((ulong)local_128.tv_nsec < 1000000000)) &&
       ((uStack_110 - 0x3ffffffe < 2 || (uStack_110 < 1000000000)))) {
      bVar3 = local_128.tv_nsec - 0x3ffffffeU < 2;
      if (bVar3) {
        local_128.tv_sec = 0;
      }
      bVar8 = bVar3 && local_128.tv_nsec == 0x3ffffffeU;
      bVar10 = bVar8;
      if (uStack_110 - 0x3ffffffe < 2) {
        local_118 = 0;
        bVar10 = !bVar3 || local_128.tv_nsec != 0x3ffffffeU;
        if (uStack_110 != 0x3ffffffe) {
          bVar10 = bVar8;
        }
        bVar3 = true;
      }
      cVar9 = bVar10 + bVar3;
      goto LAB_00100123;
    }
    piVar5 = __errno_location();
    *piVar5 = 0x16;
  }
LAB_0010007e:
  iVar4 = -1;
LAB_00100088:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int utimens(char *param_1,__time_t *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  bool bVar5;
  timeval *__tvp;
  timespec *__times;
  timespec *ptVar6;
  ulong uVar7;
  __time_t _Var8;
  char cVar9;
  long in_FS_OFFSET;
  timespec local_108;
  __time_t local_f8;
  ulong uStack_f0;
  timeval local_e8;
  __time_t local_d8;
  long local_d0;
  stat local_c8;
  long local_30;
  
  ptVar6 = &local_108;
  __times = &local_108;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (__time_t *)0x0) {
    if (param_1 != (char *)0x0) {
      cVar9 = '\0';
      __times = (timespec *)0x0;
      if (-1 < utimensat_works_really) goto LAB_001007a0;
      utimensat_works_really = -1;
      lutimensat_works_really = 0xffffffff;
LAB_0010092e:
      __tvp = (timeval *)0x0;
      goto LAB_00100848;
    }
LAB_00100a28:
    piVar3 = __errno_location();
    *piVar3 = 9;
  }
  else {
    uVar7 = param_2[1];
    uVar4 = param_2[3];
    local_108.tv_sec = *param_2;
    local_108.tv_nsec = uVar7;
    local_f8 = param_2[2];
    uStack_f0 = uVar4;
    if (((uVar7 - 0x3ffffffe < 2) || (uVar7 < 1000000000)) &&
       ((uVar4 - 0x3ffffffe < 2 || (uVar4 < 1000000000)))) {
      bVar5 = uVar7 - 0x3ffffffe < 2;
      if (bVar5) {
        local_108.tv_sec = 0;
      }
      bVar1 = bVar5 && uVar7 == 0x3ffffffe;
      if (uVar4 - 0x3ffffffe < 2) {
        local_f8 = 0;
        bVar5 = !bVar5 || uVar7 != 0x3ffffffe;
        if (uVar4 != 0x3ffffffe) {
          bVar5 = bVar1;
        }
        bVar1 = bVar5;
        bVar5 = true;
      }
      cVar9 = bVar1 + bVar5;
      if (param_1 == (char *)0x0) goto LAB_00100a28;
      if (utimensat_works_really < 0) {
        utimensat_works_really = -1;
        lutimensat_works_really = 0xffffffff;
        _Var8 = local_f8;
        if (cVar9 != '\0') {
          iVar2 = stat(param_1,&local_c8);
          if (iVar2 != 0) goto LAB_001006c0;
LAB_00100895:
          uVar4 = __times[1].tv_nsec;
          ptVar6 = __times;
          if (__times->tv_nsec == 0x3ffffffe) {
            iVar2 = 0;
            if (uVar4 == 0x3ffffffe) goto LAB_00100944;
            __times->tv_sec = local_c8.st_atim.tv_sec;
            __times->tv_nsec = local_c8.st_atim.tv_nsec;
          }
          else {
            if (__times->tv_nsec == 0x3fffffff) {
              if (uVar4 == 0x3fffffff) goto LAB_0010092e;
              gettime(__times);
              uVar4 = __times[1].tv_nsec;
            }
            if (uVar4 == 0x3ffffffe) {
              uVar7 = __times->tv_nsec;
              __times[1].tv_sec = local_c8.st_mtim.tv_sec;
              __times[1].tv_nsec = local_c8.st_mtim.tv_nsec;
              uVar4 = local_c8.st_mtim.tv_nsec;
              _Var8 = local_c8.st_mtim.tv_sec;
              goto LAB_001007fa;
            }
          }
          if (uVar4 == 0x3fffffff) {
            gettime(__times + 1);
            uVar7 = __times->tv_nsec;
            _Var8 = __times[1].tv_sec;
            uVar4 = __times[1].tv_nsec;
          }
          else {
            uVar7 = __times->tv_nsec;
            _Var8 = __times[1].tv_sec;
          }
        }
      }
      else {
        __times = &local_108;
        if (cVar9 == '\x02') {
          iVar2 = stat(param_1,&local_c8);
          if (iVar2 != 0) goto LAB_001006c0;
          if (local_108.tv_nsec == 0x3ffffffe) {
            local_108.tv_sec = local_c8.st_atim.tv_sec;
            local_108.tv_nsec = local_c8.st_atim.tv_nsec;
          }
          else if (uStack_f0 == 0x3ffffffe) {
            local_f8 = local_c8.st_mtim.tv_sec;
            uStack_f0 = local_c8.st_mtim.tv_nsec;
          }
          cVar9 = '\x03';
          __times = &local_108;
        }
LAB_001007a0:
        iVar2 = utimensat(-100,param_1,__times,0);
        if (iVar2 < 1) {
          if ((iVar2 == 0) || (piVar3 = __errno_location(), *piVar3 != 0x26)) {
            utimensat_works_really = 1;
            goto LAB_00100944;
          }
        }
        else {
          piVar3 = __errno_location();
          *piVar3 = 0x26;
        }
        utimensat_works_really = -1;
        lutimensat_works_really = 0xffffffff;
        if (cVar9 != '\0') {
          if ((cVar9 == '\x03') || (iVar2 = stat(param_1,&local_c8), iVar2 == 0)) {
            if (__times != (timespec *)0x0) goto LAB_00100895;
            __tvp = (timeval *)0x0;
            goto LAB_00100848;
          }
          goto LAB_001006c0;
        }
        if (__times == (timespec *)0x0) goto LAB_0010092e;
        uVar7 = __times->tv_nsec;
        ptVar6 = __times;
        uVar4 = __times[1].tv_nsec;
        _Var8 = __times[1].tv_sec;
      }
LAB_001007fa:
      local_e8.tv_sec = ptVar6->tv_sec;
      local_e8.tv_usec = (long)uVar7 / 1000;
      local_d0 = (long)uVar4 / 1000;
      __tvp = &local_e8;
      local_d8 = _Var8;
LAB_00100848:
      iVar2 = futimesat(-100,param_1,__tvp);
      goto LAB_00100944;
    }
    piVar3 = __errno_location();
    *piVar3 = 0x16;
  }
LAB_001006c0:
  iVar2 = -1;
LAB_00100944:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



int lutimens(char *param_1,__time_t *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  timespec *ptVar5;
  timespec *ptVar6;
  bool bVar7;
  char cVar8;
  long in_FS_OFFSET;
  timespec local_e8;
  __time_t local_d8;
  ulong uStack_d0;
  stat local_c8;
  long local_30;
  
  ptVar5 = &local_e8;
  ptVar6 = &local_e8;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (__time_t *)0x0) {
    cVar8 = '\0';
    ptVar5 = (timespec *)0x0;
    if (-1 < lutimensat_works_really) goto LAB_00100b90;
LAB_00100c2b:
    lutimensat_works_really = -1;
    iVar2 = lstat(param_1,&local_c8);
    if (iVar2 == 0) goto LAB_00100bde;
  }
  else {
    local_e8.tv_sec = *param_2;
    local_e8.tv_nsec = param_2[1];
    local_d8 = param_2[2];
    uStack_d0 = param_2[3];
    if (((1 < local_e8.tv_nsec - 0x3ffffffeU) && (999999999 < (ulong)local_e8.tv_nsec)) ||
       ((1 < uStack_d0 - 0x3ffffffe && (999999999 < uStack_d0)))) {
      piVar3 = __errno_location();
      *piVar3 = 0x16;
      goto LAB_00100ad0;
    }
    bVar1 = local_e8.tv_nsec - 0x3ffffffeU < 2;
    if (bVar1) {
      local_e8.tv_sec = 0;
    }
    bVar7 = bVar1 && local_e8.tv_nsec == 0x3ffffffeU;
    if (uStack_d0 - 0x3ffffffe < 2) {
      local_d8 = 0;
      if (uStack_d0 == 0x3ffffffe) {
        if (-1 < lutimensat_works_really) {
          cVar8 = (!bVar1 || local_e8.tv_nsec != 0x3ffffffeU) + '\x01';
          goto LAB_00100b3a;
        }
        goto LAB_00100cc2;
      }
      cVar8 = bVar7 + '\x01';
      if (lutimensat_works_really < 0) goto LAB_00100cc2;
LAB_00100b3a:
      ptVar5 = &local_e8;
      if (cVar8 == '\x02') {
        iVar2 = lstat(param_1,&local_c8);
        if (iVar2 != 0) goto LAB_00100ad0;
        if (local_e8.tv_nsec == 0x3ffffffe) {
          local_e8.tv_sec = local_c8.st_atim.tv_sec;
          local_e8.tv_nsec = local_c8.st_atim.tv_nsec;
        }
        else if (uStack_d0 == 0x3ffffffe) {
          local_d8 = local_c8.st_mtim.tv_sec;
          uStack_d0 = local_c8.st_mtim.tv_nsec;
        }
        cVar8 = '\x03';
        ptVar5 = &local_e8;
      }
LAB_00100b90:
      iVar2 = utimensat(-100,param_1,ptVar5,0x100);
      if (iVar2 < 1) {
        if ((iVar2 == 0) || (piVar3 = __errno_location(), *piVar3 != 0x26)) {
          utimensat_works_really = 1;
          lutimensat_works_really = 1;
          goto LAB_00100c62;
        }
      }
      else {
        piVar3 = __errno_location();
        *piVar3 = 0x26;
      }
      lutimensat_works_really = -1;
      if (cVar8 == '\0') goto LAB_00100c2b;
      if ((cVar8 != '\x03') && (iVar2 = lstat(param_1,&local_c8), iVar2 != 0)) goto LAB_00100ad0;
      ptVar6 = ptVar5;
      if (ptVar5 != (timespec *)0x0) goto LAB_00100cda;
LAB_00100bdc:
      ptVar5 = (timespec *)0x0;
    }
    else {
      cVar8 = bVar7 + bVar1;
      if (-1 < lutimensat_works_really) goto LAB_00100b3a;
      if (cVar8 == '\0') goto LAB_00100c2b;
LAB_00100cc2:
      lutimensat_works_really = -1;
      iVar2 = lstat(param_1,&local_c8);
      if (iVar2 != 0) goto LAB_00100ad0;
LAB_00100cda:
      lVar4 = ptVar6[1].tv_nsec;
      ptVar5 = ptVar6;
      if (ptVar6->tv_nsec == 0x3ffffffe) {
        iVar2 = 0;
        if (lVar4 == 0x3ffffffe) goto LAB_00100c62;
        ptVar6->tv_sec = local_c8.st_atim.tv_sec;
        ptVar6->tv_nsec = local_c8.st_atim.tv_nsec;
      }
      else {
        if (ptVar6->tv_nsec == 0x3fffffff) {
          if (lVar4 == 0x3fffffff) goto LAB_00100bdc;
          gettime(ptVar6);
          lVar4 = ptVar6[1].tv_nsec;
        }
        if (lVar4 == 0x3ffffffe) {
          ptVar6[1].tv_sec = local_c8.st_mtim.tv_sec;
          ptVar6[1].tv_nsec = local_c8.st_mtim.tv_nsec;
          goto LAB_00100bde;
        }
      }
      if (lVar4 == 0x3fffffff) {
        gettime(ptVar6 + 1);
      }
    }
LAB_00100bde:
    if ((local_c8.st_mode & 0xf000) != 0xa000) {
      iVar2 = fdutimens(0xffffffff,param_1,ptVar5);
      goto LAB_00100c62;
    }
    piVar3 = __errno_location();
    *piVar3 = 0x26;
  }
LAB_00100ad0:
  iVar2 = -1;
LAB_00100c62:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}


