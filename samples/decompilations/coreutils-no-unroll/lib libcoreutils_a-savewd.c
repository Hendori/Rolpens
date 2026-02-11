
void savewd_init(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



uint savewd_errno(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (3 < *param_1) {
    uVar1 = param_1[1];
  }
  return uVar1;
}



uint savewd_chdir(uint *param_1,char *param_2,uint param_3,int *param_4)

{
  int iVar1;
  int __fd;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_4 == (int *)0x0) {
    if ((param_3 & 1) != 0) {
      __fd = open_safer(param_2,(param_3 & 1) << 0x11 | 0x10900);
      goto LAB_0010006a;
    }
    uVar4 = *param_1;
    if (uVar4 == 3) {
      if (-1 < (int)param_1[1]) {
LAB_001001eb:
        __fd = -1;
        goto LAB_00100160;
      }
      uVar4 = fork();
      param_1[1] = uVar4;
      if (uVar4 == 0) goto LAB_001001eb;
      __fd = -1;
LAB_001002cf:
      if (0 < (int)uVar4) {
        bVar5 = true;
        uVar4 = 0xfffffffe;
        goto LAB_00100081;
      }
      *param_1 = 4;
      puVar3 = (uint *)__errno_location();
      param_1[1] = *puVar3;
    }
    else {
      __fd = -1;
      if (3 < uVar4) goto LAB_00100310;
      __fd = -1;
      if (uVar4 != 0) goto LAB_001001eb;
LAB_001000c7:
      uVar4 = open_safer(&_LC0,0);
      if ((int)uVar4 < 0) {
        puVar3 = (uint *)__errno_location();
        if ((*puVar3 == 0xd) || (*puVar3 == 0x74)) {
          param_1[0] = 3;
          param_1[1] = 0xffffffff;
          uVar4 = fork();
          param_1[1] = uVar4;
          if (uVar4 != 0) goto LAB_001002cf;
        }
        else {
          *param_1 = 4;
          param_1[1] = *puVar3;
        }
      }
      else {
        *param_1 = 1;
        param_1[1] = uVar4;
      }
    }
    if (__fd < 0) {
LAB_00100160:
      uVar4 = chdir(param_2);
      if (uVar4 != 0) {
        return uVar4;
      }
      uVar4 = *param_1;
joined_r0x0010017a:
      if (uVar4 != 3) {
        if (uVar4 < 4) {
          if (uVar4 == 1) {
            *param_1 = 2;
          }
          else if (uVar4 != 2) goto LAB_00100281;
        }
        else if (1 < uVar4 - 4) {
LAB_00100281:
                    /* WARNING: Subroutine does not return */
          __assert_fail("0","lib/savewd.c",0xa8,"savewd_chdir");
        }
        goto LAB_00100078;
      }
      uVar4 = param_1[1];
      if (uVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("wd->val.child == 0","lib/savewd.c",0xa4,"savewd_chdir");
      }
    }
    else {
LAB_001000ef:
      uVar4 = fchdir(__fd);
      if (uVar4 == 0) {
        uVar4 = *param_1;
        goto joined_r0x0010017a;
      }
    }
    bVar5 = param_4 == (int *)0x0;
  }
  else {
    __fd = open_safer(param_2,(param_3 & 1) << 0x11 | 0x10900);
    *param_4 = __fd;
    piVar2 = __errno_location();
    param_4[1] = *piVar2;
LAB_0010006a:
    if (__fd < 0) {
      piVar2 = __errno_location();
      if (*piVar2 != 0xd) {
        return 0xffffffff;
      }
      uVar4 = *param_1;
      if (uVar4 == 3) {
        if ((int)param_1[1] < 0) {
          uVar4 = fork();
          param_1[1] = uVar4;
          if (uVar4 != 0) goto LAB_001002cf;
        }
      }
      else if (uVar4 < 4) {
        if (uVar4 == 0) goto LAB_001000c7;
      }
      else {
LAB_00100310:
        if (1 < uVar4 - 4) {
LAB_00100204:
                    /* WARNING: Subroutine does not return */
          __assert_fail("0","lib/savewd.c",0x6c,"savewd_save");
        }
      }
      goto LAB_00100160;
    }
    if ((param_3 & 2) == 0) {
      uVar4 = *param_1;
      if (uVar4 == 3) {
        if ((int)param_1[1] < 0) {
          uVar4 = fork();
          param_1[1] = uVar4;
          if (uVar4 != 0) goto LAB_001002cf;
        }
      }
      else if (uVar4 < 4) {
        if (uVar4 == 0) goto LAB_001000c7;
      }
      else if (1 < uVar4 - 4) goto LAB_00100204;
      goto LAB_001000ef;
    }
LAB_00100078:
    bVar5 = param_4 == (int *)0x0;
    uVar4 = 0;
  }
LAB_00100081:
  if ((-1 < __fd) && (bVar5)) {
    piVar2 = __errno_location();
    iVar1 = *piVar2;
    close(__fd);
    *piVar2 = iVar1;
  }
  return uVar4;
}



uint savewd_restore(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *param_1;
  if (uVar2 == 3) {
    uVar2 = param_1[1];
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _exit(param_2);
    }
    if (0 < (int)uVar2) {
      iVar1 = waitpid(uVar2,(int *)&local_24,0);
      while (iVar1 < 0) {
        piVar3 = __errno_location();
        if (*piVar3 != 4) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("(*__errno_location ()) == 4","lib/savewd.c",0xe1,"savewd_restore");
        }
        iVar1 = waitpid(uVar2,(int *)&local_24,0);
      }
      param_1[1] = 0xffffffff;
      if ((local_24 & 0x7f) != 0) {
        raise(local_24 & 0x7f);
      }
      uVar2 = local_24 >> 8 & 0xff;
      goto LAB_001003bd;
    }
  }
  else {
    if (3 < uVar2) {
      if (uVar2 != 4) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("0","lib/savewd.c",0xeb,"savewd_restore");
      }
      uVar2 = param_1[1];
      puVar4 = (uint *)__errno_location();
LAB_00100415:
      *puVar4 = uVar2;
      uVar2 = 0xffffffff;
      goto LAB_001003bd;
    }
    if (uVar2 == 2) {
      iVar1 = fchdir(param_1[1]);
      if (iVar1 != 0) {
        puVar4 = (uint *)__errno_location();
        uVar2 = *puVar4;
        close(param_1[1]);
        *param_1 = 4;
        param_1[1] = uVar2;
        goto LAB_00100415;
      }
      *param_1 = 1;
    }
  }
  uVar2 = 0;
LAB_001003bd:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void savewd_finish(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (uVar1 == 3) {
    if (-1 < (int)param_1[1]) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("wd->val.child < 0","lib/savewd.c",0x102,"savewd_finish");
    }
  }
  else {
    if (3 < uVar1) {
      if (uVar1 != 4) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("0","lib/savewd.c",0x107,"savewd_finish");
      }
      goto LAB_00100524;
    }
    if (uVar1 != 0) {
      close(param_1[1]);
    }
  }
  param_1[1] = 0;
LAB_00100524:
  *param_1 = 5;
  return;
}



int savewd_process_files(int param_1,undefined8 *param_2,code *param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  long local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = local_48 & 0xffffffff00000000;
  iVar4 = param_1 + -1;
  if (iVar4 < 0) {
    iVar5 = 0;
  }
  else {
    puVar3 = param_2 + iVar4;
    do {
      if (*(char *)*puVar3 != '/') {
        if (iVar4 != 0) {
          local_50 = (long)iVar4;
          iVar5 = 0;
          puVar3 = param_2;
          uVar1 = 0;
LAB_00100615:
          if (uVar1 == 3) goto LAB_0010071a;
          do {
            iVar2 = (*param_3)(*puVar3,&local_48,param_4);
            if (iVar5 < iVar2) {
              iVar5 = iVar2;
            }
            do {
              if (*(char *)puVar3[1] != '/') {
                iVar2 = savewd_restore(&local_48,iVar5);
                if (iVar5 < iVar2) {
                  iVar5 = iVar2;
                }
                puVar3 = puVar3 + 1;
                uVar1 = (uint)local_48;
                if (param_2 + local_50 != puVar3) goto LAB_00100615;
LAB_00100660:
                if ((uint)local_48 == 3) {
                  if (-1 < (long)local_48) {
                    /* WARNING: Subroutine does not return */
                    __assert_fail("wd->val.child < 0","lib/savewd.c",0x102,"savewd_finish");
                  }
LAB_0010067c:
                  local_48 = 0;
                }
                else {
                  if ((uint)local_48 < 4) {
                    if ((uint)local_48 != 0) {
                      close(local_48._4_4_);
                    }
                    goto LAB_0010067c;
                  }
                  if ((uint)local_48 != 4) {
                    /* WARNING: Subroutine does not return */
                    __assert_fail("0","lib/savewd.c",0x107,"savewd_finish");
                  }
                }
                local_48 = CONCAT44(local_48._4_4_,5);
                if (param_1 <= iVar4) goto LAB_001006d4;
                goto LAB_00100693;
              }
              puVar3 = puVar3 + 1;
              if (puVar3 == param_2 + local_50) goto LAB_00100660;
              if ((uint)local_48 != 3) break;
LAB_0010071a:
            } while (0 < local_48._4_4_);
          } while( true );
        }
        break;
      }
      iVar4 = iVar4 + -1;
      puVar3 = puVar3 + -1;
    } while (iVar4 != -1);
    local_48 = 5;
    iVar4 = 0;
    iVar5 = 0;
    local_50 = 0;
LAB_00100693:
    puVar3 = param_2 + local_50;
    do {
      iVar2 = (*param_3)(*puVar3,&local_48,param_4);
      if (iVar5 < iVar2) {
        iVar5 = iVar2;
      }
      puVar3 = puVar3 + 1;
    } while (param_2 + (ulong)(uint)(param_1 - iVar4) + local_50 != puVar3);
  }
LAB_001006d4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}


