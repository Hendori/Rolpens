
undefined8 fd_new(long param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return 1;
}



undefined8 fd_free(long param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        close(*(int *)(param_1 + 0x38));
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    return 1;
  }
  return 0;
}



ulong fd_ctrl(long param_1,int param_2,__off_t param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  
  if (param_2 < 0xd) {
    switch(param_2) {
    case 1:
      param_3 = 0;
LAB_001000e2:
      uVar2 = lseek(*(int *)(param_1 + 0x38),param_3,0);
      return uVar2;
    case 2:
      return (ulong)(*(uint *)(param_1 + 0x30) >> 0xb & 1);
    case 3:
switchD_001000ad_caseD_3:
      uVar2 = lseek(*(int *)(param_1 + 0x38),0,1);
      return uVar2;
    case 8:
      return (long)*(int *)(param_1 + 0x2c);
    case 9:
      *(int *)(param_1 + 0x2c) = (int)param_3;
      return 1;
    case 0xb:
    case 0xc:
      return 1;
    }
  }
  else {
    if (param_2 == 0x69) {
      if (*(int *)(param_1 + 0x28) == 0) {
        return 0xffffffffffffffff;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(param_1 + 0x38);
      }
      return (long)*(int *)(param_1 + 0x38);
    }
    if (param_2 < 0x6a) {
      if (param_2 == 0x68) {
        if ((param_1 != 0) && (*(int *)(param_1 + 0x2c) != 0)) {
          if (*(int *)(param_1 + 0x28) != 0) {
            close(*(int *)(param_1 + 0x38));
          }
          *(undefined4 *)(param_1 + 0x28) = 0;
          *(undefined4 *)(param_1 + 0x30) = 0;
        }
        uVar1 = *param_4;
        *(int *)(param_1 + 0x2c) = (int)param_3;
        *(undefined4 *)(param_1 + 0x28) = 1;
        *(undefined4 *)(param_1 + 0x38) = uVar1;
        return 1;
      }
    }
    else {
      if (param_2 == 0x80) goto LAB_001000e2;
      if (param_2 == 0x85) goto switchD_001000ad_caseD_3;
    }
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIO_METHOD * BIO_s_fd(void)

{
  return (BIO_METHOD *)methods_fdp;
}



BIO * BIO_new_fd(int fd,int close_flag)

{
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_fd();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    BIO_int_ctrl(bp,0x68,(long)close_flag,fd);
  }
  return bp;
}



int BIO_fd_non_fatal_error(int error)

{
  int iVar1;
  
  if (error < 0x74) {
    if (0x46 < error) {
      return (int)((0x181000000001U >> ((ulong)(error - 0x47) & 0x3f) & 1) != 0);
    }
    iVar1 = 1;
    if (error != 4) {
      return (int)(error == 0xb);
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



int BIO_fd_should_retry(int i)

{
  int iVar1;
  int *piVar2;
  
  if (1 < i + 1U) {
    return 0;
  }
  piVar2 = __errno_location();
  iVar1 = BIO_fd_non_fatal_error(*piVar2);
  return iVar1;
}



ulong fd_read(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  int i;
  ulong uVar4;
  
  uVar4 = 0;
  if (param_2 != (void *)0x0) {
    piVar2 = __errno_location();
    *piVar2 = 0;
    uVar3 = read(*(int *)&param_1->next_bio,param_2,(long)param_3);
    uVar4 = uVar3 & 0xffffffff;
    BIO_clear_flags(param_1,0xf);
    i = (int)uVar3;
    if (i < 1) {
      iVar1 = BIO_fd_should_retry(i);
      if (iVar1 == 0) {
        if (i == 0) {
          *(uint *)&param_1->ptr = *(uint *)&param_1->ptr | 0x800;
        }
      }
      else {
        BIO_set_flags(param_1,9);
      }
    }
  }
  return uVar4;
}



size_t fd_gets(undefined8 param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar5 = param_2;
  while (pcVar4 = pcVar5, pcVar5 < param_2 + (long)param_3 + -1) {
    iVar2 = fd_read(param_1,pcVar5,1);
    if ((iVar2 < 1) || (pcVar4 = pcVar5 + 1, cVar1 = *pcVar5, pcVar5 = pcVar4, cVar1 == '\n'))
    break;
  }
  *pcVar4 = '\0';
  sVar3 = 0;
  if (*param_2 != '\0') {
    sVar3 = strlen(param_2);
  }
  return sVar3;
}



ulong fd_write(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  
  piVar2 = __errno_location();
  *piVar2 = 0;
  uVar3 = write(*(int *)&param_1->next_bio,param_2,(long)param_3);
  BIO_clear_flags(param_1,0xf);
  if ((int)uVar3 < 1) {
    iVar1 = BIO_fd_should_retry((int)uVar3);
    if (iVar1 != 0) {
      BIO_set_flags(param_1,10);
    }
  }
  return uVar3 & 0xffffffff;
}



void fd_puts(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  fd_write(param_1,param_2,sVar1 & 0xffffffff);
  return;
}


