
undefined1 * MDC2(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  long in_FS_OFFSET;
  undefined1 auStack_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = m_0;
  if (param_3 != (undefined1 *)0x0) {
    puVar2 = param_3;
  }
  iVar1 = MDC2_Init(auStack_58);
  if (iVar1 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    MDC2_Update(auStack_58,param_1,param_2);
    MDC2_Final(puVar2,auStack_58);
    OPENSSL_cleanse(auStack_58,0x20);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


