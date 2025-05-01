
/* WARNING: Unknown calling convention */

int set_cloexec_flag(int desc,_Bool value)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_register_0000003c;
  
  uVar2 = rpl_fcntl(CONCAT44(in_register_0000003c,desc),1,0);
  if ((int)uVar2 < 0) {
    iVar3 = -1;
  }
  else {
    uVar1 = uVar2 & 0xfffffffe;
    if (value) {
      uVar1 = uVar2 | 1;
    }
    iVar3 = 0;
    if (uVar1 != uVar2) {
      iVar3 = rpl_fcntl(desc,2);
      iVar3 = -(uint)(iVar3 == -1);
    }
  }
  return iVar3;
}



/* WARNING: Unknown calling convention */

int dup_cloexec(int fd)

{
  int iVar1;
  
  iVar1 = rpl_fcntl(fd,0x406,0);
  return iVar1;
}


