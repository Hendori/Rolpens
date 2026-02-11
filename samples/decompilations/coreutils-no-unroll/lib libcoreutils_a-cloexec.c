
int set_cloexec_flag(ulong param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rpl_fcntl(param_1,1,0);
  if ((int)uVar2 < 0) {
    iVar3 = -1;
  }
  else {
    uVar1 = uVar2 & 0xfffffffe;
    if (param_2 != '\0') {
      uVar1 = uVar2 | 1;
    }
    iVar3 = 0;
    if (uVar1 != uVar2) {
      iVar3 = rpl_fcntl(param_1 & 0xffffffff,2);
      iVar3 = -(uint)(iVar3 == -1);
    }
  }
  return iVar3;
}



void dup_cloexec(undefined8 param_1)

{
  rpl_fcntl(param_1,0x406,0);
  return;
}


