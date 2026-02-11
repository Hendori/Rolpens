
ulong ossl_rand_uniform_uint32(undefined8 param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    *param_3 = 0;
  }
  else if (param_2 != 1) {
    iVar1 = RAND_bytes_ex(param_1,&local_44,4,0);
    if (0 < iVar1) {
      uVar4 = (ulong)local_44 * (ulong)param_2;
      uVar6 = uVar4 >> 0x20;
      if (-param_2 < (uint)uVar4) {
        iVar1 = 10;
        uVar5 = uVar4;
        while( true ) {
          uVar7 = (uint)uVar5;
          iVar2 = RAND_bytes_ex(param_1,&local_44,4,0);
          if (iVar2 < 1) goto LAB_00100090;
          uVar5 = (ulong)local_44 * (ulong)param_2;
          uVar3 = (uint)(uVar5 >> 0x20);
          if (CARRY4(uVar3,uVar7)) break;
          if ((uVar3 + uVar7 != -1) || (iVar1 = iVar1 + -1, iVar1 == 0)) goto LAB_00100069;
        }
        uVar6 = (ulong)((int)(uVar4 >> 0x20) + 1);
      }
      goto LAB_00100069;
    }
LAB_00100090:
    *param_3 = 1;
  }
  uVar6 = 0;
LAB_00100069:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



int ossl_rand_range_uint32(undefined8 param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  
  if (param_2 < param_3) {
    iVar1 = ossl_rand_uniform_uint32(param_1,param_3 - param_2,param_4);
    return iVar1 + param_2;
  }
  *param_4 = 1;
  return 0;
}


