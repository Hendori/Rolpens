
undefined8 sm3_stream(uint *param_1,undefined8 param_2)

{
  void *__ptr;
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined1 auStack_f8 [184];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = malloc(0x8048);
  if (__ptr == (void *)0x0) {
LAB_00100118:
    uVar2 = 1;
LAB_001000d7:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  sm3_init_ctx(auStack_f8);
  do {
    uVar3 = 0;
LAB_0010006d:
    uVar4 = 0x8048;
    if (0x8047 < uVar3) {
      uVar4 = uVar3;
    }
    lVar1 = __fread_unlocked_chk((long)__ptr + uVar3,uVar4 - uVar3,1,0x8000 - uVar3,param_1);
    uVar3 = uVar3 + lVar1;
    if (uVar3 != 0x8000) {
      if (lVar1 != 0) break;
      if ((*param_1 & 0x20) == 0) goto LAB_001000bd;
      free(__ptr);
      goto LAB_00100118;
    }
    sm3_process_block(__ptr,0x8000,auStack_f8);
  } while( true );
  if ((*param_1 & 0x10) != 0) {
LAB_001000bd:
    if (uVar3 != 0) {
      sm3_process_bytes(__ptr,uVar3,auStack_f8);
    }
    sm3_finish_ctx(auStack_f8,param_2);
    free(__ptr);
    uVar2 = 0;
    goto LAB_001000d7;
  }
  goto LAB_0010006d;
}


