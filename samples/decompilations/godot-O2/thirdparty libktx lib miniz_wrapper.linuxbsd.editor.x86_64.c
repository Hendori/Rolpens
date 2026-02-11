
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void buminiz::ktxCompressZLIBBounds(ulong param_1)

{
  mz_compressBound(param_1);
  return;
}



undefined8
ktxCompressZLIBInt(uchar *param_1,ulong *param_2,uchar *param_3,ulong param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_2 | param_4) >> 0x20 == 0) {
    local_18 = *param_2;
    iVar1 = buminiz::mz_compress2(param_1,&local_18,param_3,param_4,param_5);
    if (-4 < iVar1) {
      uVar2 = 10;
      if (iVar1 == 0) {
        uVar2 = 0;
        *param_2 = local_18;
      }
      goto LAB_00100067;
    }
    uVar2 = 0xd;
    if ((-6 < iVar1) || (uVar2 = 10, iVar1 != -10000)) goto LAB_00100067;
  }
  uVar2 = 0xb;
LAB_00100067:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ktxUncompressZLIBInt(uchar *param_1,ulong *param_2,uchar *param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 0xb;
  if ((*param_2 | param_4) >> 0x20 == 0) {
    local_18 = *param_2;
    iVar1 = buminiz::mz_uncompress(param_1,&local_18,param_3,param_4);
    uVar2 = 0xd;
    if (iVar1 != -4) {
      if (iVar1 == 0) {
        *param_2 = local_18;
        uVar2 = 0;
      }
      else {
        uVar2 = 0x13;
        if (iVar1 != -5) {
          uVar2 = 1;
        }
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


