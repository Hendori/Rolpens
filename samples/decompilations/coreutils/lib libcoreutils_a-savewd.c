
/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

void savewd_init(savewd *wd)

{
  wd->state = INITIAL_STATE;
  return;
}



/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

int savewd_errno(savewd *wd)

{
  int iVar1;
  
  iVar1 = 0;
  if (FORKING_STATE < wd->state) {
    iVar1 = (wd->val).fd;
  }
  return iVar1;
}



/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

int savewd_chdir(savewd *wd,char *dir,int options,int *open_result)

{
  int iVar1;
  int __fd;
  anon_enum_32 aVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  if (open_result == (int *)0x0) {
    if ((options & 1U) != 0) {
      __fd = open_safer(dir,(options & 1U) << 0x11 | 0x10900);
      goto LAB_0010006a;
    }
    aVar2 = wd->state;
    if (aVar2 == FORKING_STATE) {
      if (-1 < (wd->val).fd) {
LAB_001001eb:
        __fd = -1;
        goto LAB_00100160;
      }
      iVar4 = fork();
      (wd->val).fd = iVar4;
      if (iVar4 == 0) goto LAB_001001eb;
      __fd = -1;
LAB_001002cf:
      if (0 < iVar4) {
        bVar5 = true;
        iVar4 = -2;
        goto LAB_00100081;
      }
      wd->state = ERROR_STATE;
      piVar3 = __errno_location();
      (wd->val).fd = *piVar3;
    }
    else {
      __fd = -1;
      if (FORKING_STATE < aVar2) goto LAB_00100310;
      __fd = -1;
      if (aVar2 != INITIAL_STATE) goto LAB_001001eb;
LAB_001000c7:
      iVar4 = open_safer(&_LC0,0);
      if (iVar4 < 0) {
        piVar3 = __errno_location();
        if ((*piVar3 == 0xd) || (*piVar3 == 0x74)) {
          wd->state = FORKING_STATE;
          wd->val = (anon_union_4_3_1ad77179_for_val)0xffffffff;
          iVar4 = fork();
          (wd->val).fd = iVar4;
          if (iVar4 != 0) goto LAB_001002cf;
        }
        else {
          wd->state = ERROR_STATE;
          (wd->val).fd = *piVar3;
        }
      }
      else {
        wd->state = FD_STATE;
        (wd->val).fd = iVar4;
      }
    }
    if (__fd < 0) {
LAB_00100160:
      iVar4 = chdir(dir);
      if (iVar4 != 0) {
        return iVar4;
      }
      aVar2 = wd->state;
joined_r0x0010017a:
      if (aVar2 != FORKING_STATE) {
        if (aVar2 < ERROR_STATE) {
          if (aVar2 == FD_STATE) {
            wd->state = FD_POST_CHDIR_STATE;
          }
          else if (aVar2 != FD_POST_CHDIR_STATE) goto LAB_00100281;
        }
        else if (1 < aVar2 - ERROR_STATE) {
LAB_00100281:
                    /* WARNING: Subroutine does not return */
          __assert_fail("0","lib/savewd.c",0xa8,"savewd_chdir");
        }
        goto LAB_00100078;
      }
      iVar4 = (wd->val).fd;
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("wd->val.child == 0","lib/savewd.c",0xa4,"savewd_chdir");
      }
    }
    else {
LAB_001000ef:
      iVar4 = fchdir(__fd);
      if (iVar4 == 0) {
        aVar2 = wd->state;
        goto joined_r0x0010017a;
      }
    }
    bVar5 = open_result == (int *)0x0;
  }
  else {
    __fd = open_safer(dir,(options & 1U) << 0x11 | 0x10900);
    *open_result = __fd;
    piVar3 = __errno_location();
    open_result[1] = *piVar3;
LAB_0010006a:
    if (__fd < 0) {
      piVar3 = __errno_location();
      if (*piVar3 != 0xd) {
        return -1;
      }
      aVar2 = wd->state;
      if (aVar2 == FORKING_STATE) {
        if ((wd->val).fd < 0) {
          iVar4 = fork();
          (wd->val).fd = iVar4;
          if (iVar4 != 0) goto LAB_001002cf;
        }
      }
      else if (aVar2 < ERROR_STATE) {
        if (aVar2 == INITIAL_STATE) goto LAB_001000c7;
      }
      else {
LAB_00100310:
        if (1 < aVar2 - ERROR_STATE) {
LAB_00100204:
                    /* WARNING: Subroutine does not return */
          __assert_fail("0","lib/savewd.c",0x6c,"savewd_save");
        }
      }
      goto LAB_00100160;
    }
    if ((options & 2U) == 0) {
      aVar2 = wd->state;
      if (aVar2 == FORKING_STATE) {
        if ((wd->val).fd < 0) {
          iVar4 = fork();
          (wd->val).fd = iVar4;
          if (iVar4 != 0) goto LAB_001002cf;
        }
      }
      else if (aVar2 < ERROR_STATE) {
        if (aVar2 == INITIAL_STATE) goto LAB_001000c7;
      }
      else if (1 < aVar2 - ERROR_STATE) goto LAB_00100204;
      goto LAB_001000ef;
    }
LAB_00100078:
    bVar5 = open_result == (int *)0x0;
    iVar4 = 0;
  }
LAB_00100081:
  if ((-1 < __fd) && (bVar5)) {
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    close(__fd);
    *piVar3 = iVar1;
  }
  return iVar4;
}



/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

int savewd_restore(savewd *wd,int status)

{
  anon_enum_32 aVar1;
  __pid_t __pid;
  uint uVar2;
  int iVar3;
  int *piVar4;
  anon_union_4_3_1ad77179_for_val *paVar5;
  anon_union_4_3_1ad77179_for_val aVar6;
  long in_FS_OFFSET;
  int child_status;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  aVar1 = wd->state;
  if (aVar1 == FORKING_STATE) {
    __pid = (wd->val).fd;
    if (__pid == 0) {
                    /* WARNING: Subroutine does not return */
      _exit(status);
    }
    if (0 < __pid) {
      iVar3 = waitpid(__pid,&child_status,0);
      while (iVar3 < 0) {
        piVar4 = __errno_location();
        if (*piVar4 != 4) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("(*__errno_location ()) == 4","lib/savewd.c",0xe1,"savewd_restore");
        }
        iVar3 = waitpid(__pid,&child_status,0);
      }
      (wd->val).fd = -1;
      if ((child_status & 0x7fU) != 0) {
        raise(child_status & 0x7fU);
      }
      uVar2 = (uint)child_status >> 8 & 0xff;
      goto LAB_001003bd;
    }
  }
  else {
    if (FORKING_STATE < aVar1) {
      if (aVar1 != ERROR_STATE) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("0","lib/savewd.c",0xeb,"savewd_restore");
      }
      aVar6 = wd->val;
      paVar5 = (anon_union_4_3_1ad77179_for_val *)__errno_location();
LAB_00100415:
      paVar5->fd = (int)aVar6;
      uVar2 = 0xffffffff;
      goto LAB_001003bd;
    }
    if (aVar1 == FD_POST_CHDIR_STATE) {
      iVar3 = fchdir((wd->val).fd);
      if (iVar3 != 0) {
        paVar5 = (anon_union_4_3_1ad77179_for_val *)__errno_location();
        aVar6.fd = *(int *)paVar5;
        close((wd->val).fd);
        wd->state = ERROR_STATE;
        (wd->val).fd = (int)aVar6;
        goto LAB_00100415;
      }
      wd->state = FD_STATE;
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



/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

void savewd_finish(savewd *wd)

{
  anon_enum_32 aVar1;
  
  aVar1 = wd->state;
  if (aVar1 == FORKING_STATE) {
    if (-1 < (wd->val).fd) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("wd->val.child < 0","lib/savewd.c",0x102,"savewd_finish");
    }
  }
  else {
    if (FORKING_STATE < aVar1) {
      if (aVar1 != ERROR_STATE) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("0","lib/savewd.c",0x107,"savewd_finish");
      }
      goto LAB_00100524;
    }
    if (aVar1 != INITIAL_STATE) {
      close((wd->val).fd);
    }
  }
  (wd->val).fd = 0;
LAB_00100524:
  wd->state = FINAL_STATE;
  return;
}



/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

int savewd_process_files
              (int n_files,char **file,_func_int_char_ptr_savewd_ptr_void_ptr *act,void *options)

{
  long lVar1;
  int iVar2;
  char **ppcVar3;
  int iVar4;
  int status;
  long in_FS_OFFSET;
  long local_50;
  savewd wd;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  wd.state = INITIAL_STATE;
  iVar4 = n_files + -1;
  if (-1 < iVar4) {
    ppcVar3 = file + iVar4;
LAB_001005e2:
    if (**ppcVar3 == '/') goto LAB_001005d0;
    if (iVar4 != 0) {
      local_50 = (long)iVar4;
      status = 0;
      ppcVar3 = file;
      do {
        if (((wd.state != FORKING_STATE) || (wd.val.fd < 1)) &&
           (iVar2 = (*act)(*ppcVar3,&wd,options), status < iVar2)) {
          status = iVar2;
        }
        if ((*ppcVar3[1] != '/') && (iVar2 = savewd_restore(&wd,status), status < iVar2)) {
          status = iVar2;
        }
        ppcVar3 = ppcVar3 + 1;
      } while (ppcVar3 != file + local_50);
      savewd_finish(&wd);
      if (n_files <= iVar4) goto LAB_001006bb;
      goto LAB_0010067f;
    }
    goto LAB_001006f0;
  }
  status = 0;
  savewd_finish(&wd);
LAB_001006bb:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return status;
LAB_001005d0:
  iVar4 = iVar4 + -1;
  ppcVar3 = ppcVar3 + -1;
  if (iVar4 == -1) goto LAB_001006f0;
  goto LAB_001005e2;
LAB_001006f0:
  status = 0;
  iVar4 = 0;
  savewd_finish(&wd);
  local_50 = 0;
LAB_0010067f:
  ppcVar3 = file + local_50;
  do {
    iVar2 = (*act)(*ppcVar3,&wd,options);
    if (status < iVar2) {
      status = iVar2;
    }
    ppcVar3 = ppcVar3 + 1;
  } while (ppcVar3 != file + (ulong)(uint)(n_files - iVar4) + local_50);
  goto LAB_001006bb;
}


