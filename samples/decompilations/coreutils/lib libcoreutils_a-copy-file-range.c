
/* WARNING: Unknown calling convention */

ssize_t rpl_copy_file_range(int infd,off_t *pinoff,int outfd,off_t *poutoff,size_t length,uint flags
                           )

{
  long lVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined4 in_register_00000014;
  ulong uVar4;
  undefined4 in_register_0000008c;
  ulong uVar5;
  long in_FS_OFFSET;
  utsname name;
  
  uVar5 = CONCAT44(in_register_0000008c,flags);
  uVar4 = CONCAT44(in_register_00000014,outfd);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (rpl_copy_file_range::ok == '\0') {
    uname((utsname *)&name);
    uVar4 = (ulong)(uint)outfd;
    uVar5 = (ulong)flags;
    if (((name.release[1] == '.') && (name.release[0] < '6')) &&
       ((name.release[0] != '5' || ((name.release[3] == '.' && (name.release[2] < '3')))))) {
      rpl_copy_file_range::ok = -1;
      goto LAB_001000c3;
    }
    rpl_copy_file_range::ok = '\x01';
  }
  else if (rpl_copy_file_range::ok < '\x01') {
LAB_001000c3:
    piVar3 = __errno_location();
    *piVar3 = 0x26;
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return -1;
    }
    goto LAB_0010010e;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    sVar2 = copy_file_range(infd,pinoff,uVar4,poutoff,length,uVar5);
    return sVar2;
  }
LAB_0010010e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


