
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_20;
  undefined1 local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (1 < param_1 - 2U) {
    __fprintf_chk(_stderr,2,0x100000,*param_2);
    bVar2 = 1;
    goto LAB_00100082;
  }
  if (param_1 == 3) {
    lVar1 = param_2[2];
    local_20 = 0;
    iVar3 = sd_load(param_2[1],&local_20,2);
    if (iVar3 != 0) {
      if (lVar1 == 0) goto LAB_001000f0;
      iVar3 = sd_sym(local_20,lVar1,local_18);
      bVar4 = iVar3 != 0;
      goto LAB_001000e0;
    }
LAB_0010007b:
    bVar4 = false;
  }
  else {
    local_20 = 0;
    iVar3 = sd_load(param_2[1],&local_20,2);
    if (iVar3 == 0) goto LAB_0010007b;
LAB_001000f0:
    bVar4 = true;
LAB_001000e0:
    iVar3 = sd_close(local_20);
    if (iVar3 == 0) goto LAB_0010007b;
  }
  bVar2 = bVar4 ^ 1;
LAB_00100082:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}


