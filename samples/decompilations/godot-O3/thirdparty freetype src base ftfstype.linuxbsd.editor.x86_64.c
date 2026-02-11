
short FT_Get_FSType_Flags(long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  short *psVar4;
  long in_FS_OFFSET;
  short local_12;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    pcVar1 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
    if ((((pcVar1 != (code *)0x0) &&
         (lVar3 = (*pcVar1)(*(long **)(param_1 + 0xb0),"postscript-info"), lVar3 != 0)) &&
        (*(code **)(lVar3 + 8) != (code *)0x0)) &&
       ((iVar2 = (**(code **)(lVar3 + 8))(param_1,&local_12), iVar2 == 0 && (local_12 != 0))))
    goto LAB_0010007a;
  }
  psVar4 = (short *)FT_Get_Sfnt_Table(param_1,2);
  local_12 = 0;
  if ((psVar4 != (short *)0x0) && (*psVar4 != -1)) {
    local_12 = psVar4[4];
  }
LAB_0010007a:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_12;
}


