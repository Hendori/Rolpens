
char * IDEA_options(void)

{
  return "idea(int)";
}



void IDEA_ecb_encrypt(uint *param_1,ulong *param_2,undefined8 param_3)

{
  uint uVar1;
  long in_FS_OFFSET;
  ulong local_28;
  ulong local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *param_1;
  local_28 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18
                    );
  uVar1 = param_1[1];
  local_20 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18
                    );
  IDEA_encrypt(&local_28,param_3);
  *param_2 = (((((((local_20 & 0xff) << 8 | local_20 >> 8 & 0xff) << 8 | local_20 >> 0x10 & 0xff) <<
                 8 | local_20 >> 0x18 & 0xff) << 8 | local_28 & 0xff) << 8 | local_28 >> 8 & 0xff)
              << 8 | local_28 >> 0x10 & 0xff) << 8 | local_28 >> 0x18 & 0xff;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


