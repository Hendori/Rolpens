
/* WARNING: Unknown calling convention */

int validate_timespec(timespec *timespec)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  uint uVar6;
  
  uVar1 = timespec->tv_nsec;
  if ((uVar1 - 0x3ffffffe < 2) || (uVar1 < 1000000000)) {
    uVar2 = timespec[1].tv_nsec;
    if ((uVar2 - 0x3ffffffe < 2) || (uVar2 < 1000000000)) {
      bVar3 = uVar1 - 0x3ffffffe < 2;
      if (bVar3) {
        timespec->tv_sec = 0;
      }
      cVar4 = bVar3 && uVar1 == 0x3ffffffe;
      uVar6 = (uint)bVar3;
      if (uVar2 - 0x3ffffffe < 2) {
        timespec[1].tv_sec = 0;
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



/* WARNING: Unknown calling convention */

_Bool update_timespec(stat *statbuf,timespec **ts)

{
  timespec *ptVar1;
  __syscall_slong_t _Var2;
  long lVar3;
  
  ptVar1 = *ts;
  lVar3 = ptVar1[1].tv_nsec;
  if (ptVar1->tv_nsec == 0x3ffffffe) {
    if (lVar3 == 0x3ffffffe) {
      return true;
    }
    _Var2 = (statbuf->st_atim).tv_nsec;
    ptVar1->tv_sec = (statbuf->st_atim).tv_sec;
    ptVar1->tv_nsec = _Var2;
  }
  else {
    if (ptVar1->tv_nsec == 0x3fffffff) {
      if (lVar3 == 0x3fffffff) {
        *ts = (timespec *)0x0;
        return false;
      }
      gettime(ptVar1);
      lVar3 = ptVar1[1].tv_nsec;
    }
    if (lVar3 == 0x3ffffffe) {
      _Var2 = (statbuf->st_mtim).tv_nsec;
      ptVar1[1].tv_sec = (statbuf->st_mtim).tv_sec;
      ptVar1[1].tv_nsec = _Var2;
      return false;
    }
  }
  if (lVar3 == 0x3fffffff) {
    gettime(ptVar1 + 1);
  }
  return false;
}



/* WARNING: Unknown calling convention */

int lutimensat(int dir,char *file,timespec *times)

{
  int iVar1;
  
  iVar1 = utimensat(dir,file,(timespec *)times,0x100);
  return iVar1;
}



/* WARNING: Unknown calling convention */

int fdutimens(int fd,char *file,timespec *timespec)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  __syscall_slong_t _Var4;
  __syscall_slong_t _Var5;
  _Bool _Var6;
  int iVar7;
  int iVar8;
  int *piVar9;
  timespec *timespec_00;
  timespec *__tvp;
  long in_FS_OFFSET;
  bool bVar10;
  timespec *ts;
  timespec adjusted_timespec [2];
  timeval timeval [2];
  timeval truncated_timeval [2];
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (timespec == (timespec *)0x0) {
    ts = (timespec *)0x0;
    iVar7 = 0;
    timespec_00 = (timespec *)0x0;
LAB_001001ca:
    if ((-1 < fd) || (file != (char *)0x0)) {
      if (utimensat_works_really < 0) {
        utimensat_works_really = -1;
        lutimensat_works_really = -1;
        if (iVar7 != 0) {
          if (iVar7 != 3) {
            if (-1 < fd) goto LAB_00100377;
LAB_00100518:
            utimensat_works_really = -1;
            lutimensat_works_really = -1;
            iVar7 = stat(file,(stat *)&st);
LAB_00100388:
            if (iVar7 != 0) goto LAB_0010056b;
          }
          if (timespec_00 != (timespec *)0x0) {
LAB_00100395:
            iVar8 = 0;
            _Var6 = update_timespec(&st,&ts);
            if (_Var6) goto LAB_001002a0;
          }
        }
        __tvp = ts;
        if (ts != (timespec *)0x0) {
LAB_001003b9:
          timeval[0].tv_sec = ts->tv_sec;
          timeval[0].tv_usec = ts->tv_nsec / 1000;
          timeval[1].tv_sec = ts[1].tv_sec;
          timeval[1].tv_usec = ts[1].tv_nsec / 1000;
          __tvp = (timespec *)timeval;
        }
        if (-1 < fd) {
          iVar7 = futimesat(fd,(char *)0x0,(timeval *)__tvp);
joined_r0x00100423:
          if (iVar7 != 0) goto LAB_00100429;
          if (__tvp != (timespec *)0x0) {
            lVar2 = __tvp->tv_nsec;
            bVar3 = 499999 < __tvp[1].tv_nsec;
            if (((499999 < lVar2) || (bVar3)) && (iVar7 = fstat(fd,(stat *)&st), iVar7 == 0)) {
              truncated_timeval[0].tv_sec = __tvp->tv_sec;
              truncated_timeval[0].tv_usec = __tvp->tv_nsec;
              truncated_timeval[1].tv_sec = __tvp[1].tv_sec;
              truncated_timeval[1].tv_usec = __tvp[1].tv_nsec;
              bVar10 = st.st_mtim.tv_sec - __tvp[1].tv_sec == 1;
              if (((st.st_atim.tv_sec - __tvp->tv_sec == 1) && (499999 < lVar2)) &&
                 (st.st_atim.tv_nsec == 0)) {
                truncated_timeval[0].tv_usec = 0;
                if ((bVar10 && bVar3) && (st.st_mtim.tv_nsec == 0)) {
LAB_0010060e:
                  truncated_timeval[1].tv_usec = 0;
                }
                futimesat(fd,(char *)0x0,(timeval *)truncated_timeval);
              }
              else if ((bVar10 && bVar3) && (st.st_mtim.tv_nsec == 0)) goto LAB_0010060e;
            }
          }
LAB_00100298:
          iVar8 = 0;
          goto LAB_001002a0;
        }
      }
      else {
        if (iVar7 == 2) {
          if (fd < 0) {
            iVar7 = stat(file,(stat *)&st);
          }
          else {
            iVar7 = fstat(fd,(stat *)&st);
          }
          _Var5 = st.st_mtim.tv_nsec;
          _Var4 = st.st_atim.tv_nsec;
          if (iVar7 != 0) goto LAB_0010056b;
          if (((timespec *)timespec_00)->tv_nsec == 0x3ffffffe) {
            ((timespec *)timespec_00)->tv_sec = st.st_atim.tv_sec;
            ((timespec *)timespec_00)->tv_nsec = _Var4;
          }
          else if (((timespec *)timespec_00)[1].tv_nsec == 0x3ffffffe) {
            ((timespec *)timespec_00)[1].tv_sec = st.st_mtim.tv_sec;
            ((timespec *)timespec_00)[1].tv_nsec = _Var5;
          }
          iVar7 = 3;
        }
        if (-1 < fd) {
          iVar8 = futimens(fd,(timespec *)timespec_00);
          if (iVar8 < 1) {
            if ((iVar8 == 0) || (piVar9 = __errno_location(), *piVar9 != 0x26)) goto LAB_001004c6;
          }
          else {
            piVar9 = __errno_location();
            *piVar9 = 0x26;
          }
          __tvp = ts;
          utimensat_works_really = -1;
          lutimensat_works_really = -1;
          if (iVar7 != 0) {
            if (iVar7 != 3) {
LAB_00100377:
              utimensat_works_really = -1;
              lutimensat_works_really = -1;
              iVar7 = fstat(fd,(stat *)&st);
              goto LAB_00100388;
            }
            if (timespec_00 != (timespec *)0x0) goto LAB_00100395;
            if (ts != (timespec *)0x0) goto LAB_001003b9;
            iVar7 = futimesat(fd,(char *)0x0,(timeval *)0x0);
            goto joined_r0x00100423;
          }
          if (ts != (timespec *)0x0) goto LAB_001003b9;
          iVar7 = futimesat(fd,(char *)0x0,(timeval *)0x0);
          if (iVar7 == 0) goto LAB_00100298;
LAB_00100429:
          iVar8 = -1;
          if (file != (char *)0x0) {
            iVar8 = utimes(file,(timeval *)__tvp);
          }
          goto LAB_001002a0;
        }
        iVar8 = utimensat(-100,file,(timespec *)timespec_00,0);
        if (iVar8 < 1) {
          if ((iVar8 == 0) || (piVar9 = __errno_location(), *piVar9 != 0x26)) {
LAB_001004c6:
            utimensat_works_really = 1;
            goto LAB_001002a0;
          }
        }
        else {
          piVar9 = __errno_location();
          *piVar9 = 0x26;
        }
        utimensat_works_really = -1;
        lutimensat_works_really = -1;
        if (iVar7 != 0) {
          if (iVar7 != 3) goto LAB_00100518;
          if (timespec_00 != (timespec *)0x0) goto LAB_00100395;
        }
        __tvp = ts;
        if (ts != (timespec *)0x0) goto LAB_001003b9;
      }
      iVar8 = futimesat(-100,file,(timeval *)__tvp);
      goto LAB_001002a0;
    }
    piVar9 = __errno_location();
    *piVar9 = 9;
  }
  else {
    adjusted_timespec[0].tv_sec = timespec->tv_sec;
    adjusted_timespec[0].tv_nsec = timespec->tv_nsec;
    adjusted_timespec[1].tv_sec = timespec[1].tv_sec;
    adjusted_timespec[1].tv_nsec = timespec[1].tv_nsec;
    timespec_00 = adjusted_timespec;
    ts = timespec_00;
    iVar7 = validate_timespec(timespec_00);
    if (-1 < iVar7) goto LAB_001001ca;
  }
LAB_0010056b:
  iVar8 = -1;
LAB_001002a0:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

int utimens(char *file,timespec *timespec)

{
  int iVar1;
  
  iVar1 = fdutimens(-1,file,timespec);
  return iVar1;
}



/* WARNING: Unknown calling convention */

int lutimens(char *file,timespec *timespec)

{
  long lVar1;
  _Bool _Var2;
  int iVar3;
  int iVar4;
  int *piVar5;
  timespec *timespec_00;
  long in_FS_OFFSET;
  timespec *ts;
  timespec adjusted_timespec [2];
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (timespec == (timespec *)0x0) {
    iVar3 = 0;
    ts = (timespec *)0x0;
    timespec_00 = (timespec *)0x0;
    if (-1 < lutimensat_works_really) goto LAB_00100738;
LAB_0010084c:
    lutimensat_works_really = -1;
    iVar3 = lstat(file,(stat *)&st);
    if (iVar3 == 0) {
LAB_0010079c:
      if ((st.st_mode & 0xf000) != 0xa000) {
        iVar4 = fdutimens(-1,file,ts);
        goto LAB_001007c4;
      }
      piVar5 = __errno_location();
      *piVar5 = 0x26;
    }
  }
  else {
    adjusted_timespec[0].tv_sec = timespec->tv_sec;
    adjusted_timespec[0].tv_nsec = timespec->tv_nsec;
    adjusted_timespec[1].tv_sec = timespec[1].tv_sec;
    adjusted_timespec[1].tv_nsec = timespec[1].tv_nsec;
    timespec_00 = adjusted_timespec;
    ts = timespec_00;
    iVar3 = validate_timespec(timespec_00);
    if (-1 < iVar3) {
      if (lutimensat_works_really < 0) {
        lutimensat_works_really = -1;
        if (iVar3 == 0) goto LAB_0010084c;
        if ((iVar3 != 3) && (iVar3 = lstat(file,(stat *)&st), iVar3 != 0)) goto LAB_0010089b;
LAB_0010080a:
        iVar4 = 0;
        _Var2 = update_timespec(&st,&ts);
        if (_Var2) goto LAB_001007c4;
      }
      else {
        if (iVar3 == 2) {
          iVar3 = lstat(file,(stat *)&st);
          if (iVar3 != 0) goto LAB_0010089b;
          if (adjusted_timespec[0].tv_nsec == 0x3ffffffe) {
            adjusted_timespec[0].tv_sec = st.st_atim.tv_sec;
            adjusted_timespec[0].tv_nsec = st.st_atim.tv_nsec;
          }
          else if (adjusted_timespec[1].tv_nsec == 0x3ffffffe) {
            adjusted_timespec[1].tv_sec = st.st_mtim.tv_sec;
            adjusted_timespec[1].tv_nsec = st.st_mtim.tv_nsec;
          }
          iVar3 = 3;
        }
LAB_00100738:
        iVar4 = utimensat(-100,file,(timespec *)timespec_00,0x100);
        if (iVar4 < 1) {
          if ((iVar4 == 0) || (piVar5 = __errno_location(), *piVar5 != 0x26)) {
            utimensat_works_really = 1;
            lutimensat_works_really = 1;
            goto LAB_001007c4;
          }
        }
        else {
          piVar5 = __errno_location();
          *piVar5 = 0x26;
        }
        lutimensat_works_really = -1;
        if (iVar3 == 0) goto LAB_0010084c;
        if ((iVar3 != 3) && (iVar3 = lstat(file,(stat *)&st), iVar3 != 0)) goto LAB_0010089b;
        if (timespec_00 != (timespec *)0x0) goto LAB_0010080a;
      }
      goto LAB_0010079c;
    }
  }
LAB_0010089b:
  iVar4 = -1;
LAB_001007c4:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}


