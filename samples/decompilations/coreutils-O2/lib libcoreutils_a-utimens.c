
int validate_timespec(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  uint uVar6;
  
  uVar1 = param_1[1];
  if ((uVar1 - 0x3ffffffe < 2) || (uVar1 < 1000000000)) {
    uVar2 = param_1[3];
    if ((uVar2 - 0x3ffffffe < 2) || (uVar2 < 1000000000)) {
      bVar3 = uVar1 - 0x3ffffffe < 2;
      if (bVar3) {
        *param_1 = 0;
      }
      cVar4 = bVar3 && uVar1 == 0x3ffffffe;
      uVar6 = (uint)bVar3;
      if (uVar2 - 0x3ffffffe < 2) {
        param_1[2] = 0;
        uVar6 = 1;
        cVar4 = cVar4 + (uVar2 == 0x3ffffffe);
      }
      return (cVar4 == '\x01') + uVar6;
    }
  }
  piVar5 = __errno_location();
  *piVar5 = 0x16;
  return -1;
}



undefined8 update_timespec(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)*param_2;
  lVar3 = puVar1[3];
  if (puVar1[1] == 0x3ffffffe) {
    if (lVar3 == 0x3ffffffe) {
      return 1;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *puVar1 = *(undefined8 *)(param_1 + 0x48);
    puVar1[1] = uVar2;
  }
  else {
    if (puVar1[1] == 0x3fffffff) {
      if (lVar3 == 0x3fffffff) {
        *param_2 = 0;
        return 0;
      }
      gettime(puVar1);
      lVar3 = puVar1[3];
    }
    if (lVar3 == 0x3ffffffe) {
      uVar2 = *(undefined8 *)(param_1 + 0x60);
      puVar1[2] = *(undefined8 *)(param_1 + 0x58);
      puVar1[3] = uVar2;
      return 0;
    }
  }
  if (lVar3 == 0x3fffffff) {
    gettime(puVar1 + 2);
  }
  return 0;
}



void lutimensat(int param_1,char *param_2,timespec *param_3)

{
  utimensat(param_1,param_2,param_3,0x100);
  return;
}



int fdutimens(int param_1,char *param_2,__time_t *param_3)

{
  long lVar1;
  bool bVar2;
  timespec *ptVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  long in_FS_OFFSET;
  bool bVar9;
  timespec *local_130;
  timespec local_128;
  __time_t local_118;
  __time_t _Stack_110;
  timespec local_108;
  __time_t local_f8;
  long local_f0;
  timeval local_e8;
  __time_t local_d8;
  __suseconds_t _Stack_d0;
  stat local_c8;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (__time_t *)0x0) {
    local_130 = (timespec *)0x0;
    iVar6 = 0;
LAB_001001ca:
    if ((-1 < param_1) || (param_2 != (char *)0x0)) {
      if (utimensat_works_really < 0) {
        utimensat_works_really = -1;
        lutimensat_works_really = 0xffffffff;
        if (iVar6 != 0) {
          if (iVar6 != 3) {
            if (-1 < param_1) goto LAB_00100377;
LAB_00100518:
            utimensat_works_really = -1;
            lutimensat_works_really = 0xffffffff;
            iVar6 = stat(param_2,&local_c8);
LAB_00100388:
            if (iVar6 != 0) goto LAB_0010056b;
          }
          if (local_130 != (timespec *)0x0) {
LAB_00100395:
            iVar7 = 0;
            cVar5 = update_timespec(&local_c8);
            if (cVar5 != '\0') goto LAB_001002a0;
          }
        }
        if (local_130 != (timespec *)0x0) {
LAB_001003b9:
          local_108.tv_sec = local_130->tv_sec;
          local_108.tv_nsec = local_130->tv_nsec / 1000;
          ptVar3 = local_130 + 1;
          local_f8 = local_130[1].tv_sec;
          local_130 = &local_108;
          local_f0 = ptVar3->tv_nsec / 1000;
        }
        if (-1 < param_1) {
          iVar6 = futimesat(param_1,(char *)0x0,(timeval *)local_130);
joined_r0x00100423:
          if (iVar6 != 0) goto LAB_00100429;
          if (local_130 != (timespec *)0x0) {
            lVar1 = local_130->tv_nsec;
            bVar2 = 499999 < local_130[1].tv_nsec;
            if (((499999 < lVar1) || (bVar2)) && (iVar6 = fstat(param_1,&local_c8), iVar6 == 0)) {
              local_e8.tv_sec = local_130->tv_sec;
              local_e8.tv_usec = local_130->tv_nsec;
              local_d8 = local_130[1].tv_sec;
              _Stack_d0 = local_130[1].tv_nsec;
              bVar9 = local_c8.st_mtim.tv_sec - local_130[1].tv_sec == 1;
              if (((local_c8.st_atim.tv_sec - local_130->tv_sec == 1) && (499999 < lVar1)) &&
                 (local_c8.st_atim.tv_nsec == 0)) {
                local_e8.tv_usec = 0;
                if ((bVar9 && bVar2) && (local_c8.st_mtim.tv_nsec == 0)) {
LAB_0010060e:
                  _Stack_d0 = 0;
                }
                futimesat(param_1,(char *)0x0,&local_e8);
              }
              else if ((bVar9 && bVar2) && (local_c8.st_mtim.tv_nsec == 0)) goto LAB_0010060e;
            }
          }
LAB_00100298:
          iVar7 = 0;
          goto LAB_001002a0;
        }
      }
      else {
        if (iVar6 == 2) {
          if (param_1 < 0) {
            iVar6 = stat(param_2,&local_c8);
          }
          else {
            iVar6 = fstat(param_1,&local_c8);
          }
          lVar4 = local_c8.st_mtim.tv_nsec;
          lVar1 = local_c8.st_atim.tv_nsec;
          if (iVar6 != 0) goto LAB_0010056b;
          if (local_130->tv_nsec == 0x3ffffffe) {
            local_130->tv_sec = local_c8.st_atim.tv_sec;
            local_130->tv_nsec = lVar1;
          }
          else if (local_130[1].tv_nsec == 0x3ffffffe) {
            local_130[1].tv_sec = local_c8.st_mtim.tv_sec;
            local_130[1].tv_nsec = lVar4;
          }
          iVar6 = 3;
        }
        if (-1 < param_1) {
          iVar7 = futimens(param_1,local_130);
          if (iVar7 < 1) {
            if ((iVar7 == 0) || (piVar8 = __errno_location(), *piVar8 != 0x26)) goto LAB_001004c6;
          }
          else {
            piVar8 = __errno_location();
            *piVar8 = 0x26;
          }
          utimensat_works_really = -1;
          lutimensat_works_really = 0xffffffff;
          if (iVar6 != 0) {
            if (iVar6 != 3) {
LAB_00100377:
              utimensat_works_really = -1;
              lutimensat_works_really = 0xffffffff;
              iVar6 = fstat(param_1,&local_c8);
              goto LAB_00100388;
            }
            if (local_130 != (timespec *)0x0) goto LAB_00100395;
            iVar6 = futimesat(param_1,(char *)0x0,(timeval *)0x0);
            goto joined_r0x00100423;
          }
          if (local_130 != (timespec *)0x0) goto LAB_001003b9;
          iVar6 = futimesat(param_1,(char *)0x0,(timeval *)0x0);
          if (iVar6 == 0) goto LAB_00100298;
LAB_00100429:
          iVar7 = -1;
          if (param_2 != (char *)0x0) {
            iVar7 = utimes(param_2,(timeval *)local_130);
          }
          goto LAB_001002a0;
        }
        iVar7 = utimensat(-100,param_2,local_130,0);
        if (iVar7 < 1) {
          if ((iVar7 == 0) || (piVar8 = __errno_location(), *piVar8 != 0x26)) {
LAB_001004c6:
            utimensat_works_really = 1;
            goto LAB_001002a0;
          }
        }
        else {
          piVar8 = __errno_location();
          *piVar8 = 0x26;
        }
        utimensat_works_really = -1;
        lutimensat_works_really = 0xffffffff;
        if (iVar6 != 0) {
          if (iVar6 != 3) goto LAB_00100518;
          if (local_130 != (timespec *)0x0) goto LAB_00100395;
        }
        if (local_130 != (timespec *)0x0) goto LAB_001003b9;
      }
      iVar7 = futimesat(-100,param_2,(timeval *)local_130);
      goto LAB_001002a0;
    }
    piVar8 = __errno_location();
    *piVar8 = 9;
  }
  else {
    local_128.tv_sec = *param_3;
    local_128.tv_nsec = param_3[1];
    local_118 = param_3[2];
    _Stack_110 = param_3[3];
    local_130 = &local_128;
    iVar6 = validate_timespec(local_130);
    if (-1 < iVar6) goto LAB_001001ca;
  }
LAB_0010056b:
  iVar7 = -1;
LAB_001002a0:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}



void utimens(undefined8 param_1,undefined8 param_2)

{
  fdutimens(0xffffffff,param_1,param_2);
  return;
}



int lutimens(char *param_1,__time_t *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  timespec *__times;
  long in_FS_OFFSET;
  timespec *local_f0;
  timespec local_e8;
  __time_t local_d8;
  long lStack_d0;
  stat local_c8;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (__time_t *)0x0) {
    iVar2 = 0;
    local_f0 = (timespec *)0x0;
    __times = (timespec *)0x0;
    if (-1 < lutimensat_works_really) goto LAB_00100738;
LAB_0010084c:
    lutimensat_works_really = -1;
    iVar2 = lstat(param_1,&local_c8);
    if (iVar2 == 0) {
LAB_0010079c:
      if ((local_c8.st_mode & 0xf000) != 0xa000) {
        iVar3 = fdutimens(0xffffffff,param_1,local_f0);
        goto LAB_001007c4;
      }
      piVar4 = __errno_location();
      *piVar4 = 0x26;
    }
  }
  else {
    local_e8.tv_sec = *param_2;
    local_e8.tv_nsec = param_2[1];
    local_d8 = param_2[2];
    lStack_d0 = param_2[3];
    __times = &local_e8;
    local_f0 = __times;
    iVar2 = validate_timespec(__times);
    if (-1 < iVar2) {
      if (lutimensat_works_really < 0) {
        lutimensat_works_really = -1;
        if (iVar2 == 0) goto LAB_0010084c;
        if ((iVar2 != 3) && (iVar2 = lstat(param_1,&local_c8), iVar2 != 0)) goto LAB_0010089b;
LAB_0010080a:
        iVar3 = 0;
        cVar1 = update_timespec(&local_c8,&local_f0);
        if (cVar1 != '\0') goto LAB_001007c4;
      }
      else {
        if (iVar2 == 2) {
          iVar2 = lstat(param_1,&local_c8);
          if (iVar2 != 0) goto LAB_0010089b;
          if (local_e8.tv_nsec == 0x3ffffffe) {
            local_e8.tv_sec = local_c8.st_atim.tv_sec;
            local_e8.tv_nsec = local_c8.st_atim.tv_nsec;
          }
          else if (lStack_d0 == 0x3ffffffe) {
            local_d8 = local_c8.st_mtim.tv_sec;
            lStack_d0 = local_c8.st_mtim.tv_nsec;
          }
          iVar2 = 3;
        }
LAB_00100738:
        iVar3 = utimensat(-100,param_1,__times,0x100);
        if (iVar3 < 1) {
          if ((iVar3 == 0) || (piVar4 = __errno_location(), *piVar4 != 0x26)) {
            utimensat_works_really = 1;
            lutimensat_works_really = 1;
            goto LAB_001007c4;
          }
        }
        else {
          piVar4 = __errno_location();
          *piVar4 = 0x26;
        }
        lutimensat_works_really = -1;
        if (iVar2 == 0) goto LAB_0010084c;
        if ((iVar2 != 3) && (iVar2 = lstat(param_1,&local_c8), iVar2 != 0)) goto LAB_0010089b;
        if (__times != (timespec *)0x0) goto LAB_0010080a;
      }
      goto LAB_0010079c;
    }
  }
LAB_0010089b:
  iVar3 = -1;
LAB_001007c4:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}


