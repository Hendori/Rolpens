
/* WARNING: Unknown calling convention */

int rpl_strerror_r(int errnum,char *buf,size_t buflen)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  char *__s;
  size_t __n;
  long in_FS_OFFSET;
  char stackbuf [80];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (buflen < 2) {
    if (buflen != 0) {
      *buf = '\0';
    }
    iVar3 = 0x22;
    goto LAB_00100062;
  }
  *buf = '\0';
  piVar4 = __errno_location();
  iVar1 = *piVar4;
  iVar3 = __xpg_strerror_r(errnum,buf,buflen);
  if (*buf == '\0') {
    __s = strerror_r(errnum,stackbuf,0x50);
    if (__s == (char *)0x0) {
      iVar3 = *piVar4;
      goto joined_r0x00100127;
    }
    __n = strlen(__s);
    if (__n < buflen) {
      iVar3 = 0;
      memmove(buf,__s,__n);
      buf[__n] = '\0';
    }
    else {
      iVar3 = 0x22;
      memmove(buf,__s,buflen - 1);
      buf[buflen - 1] = '\0';
    }
  }
  else {
joined_r0x00100127:
    if ((iVar3 == 0x16) && (*buf == '\0')) {
      __snprintf_chk(buf,buflen,2,0xffffffffffffffff,"Unknown error %d",errnum);
    }
  }
  *piVar4 = iVar1;
LAB_00100062:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}


