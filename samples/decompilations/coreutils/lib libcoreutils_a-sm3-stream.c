
/* WARNING: Unknown calling convention */

int sm3_stream(FILE *stream,void *resblock)

{
  long lVar1;
  int iVar2;
  void *__ptr;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  sm3_ctx ctx;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = malloc(0x8048);
  if (__ptr == (void *)0x0) {
LAB_00100118:
    iVar2 = 1;
LAB_001000d7:
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar2;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  sm3_init_ctx(&ctx);
  do {
    uVar4 = 0;
LAB_0010006d:
    uVar5 = 0x8048;
    if (0x8047 < uVar4) {
      uVar5 = uVar4;
    }
    lVar3 = __fread_unlocked_chk((long)__ptr + uVar4,uVar5 - uVar4,1,0x8000 - uVar4,stream);
    uVar4 = uVar4 + lVar3;
    if (uVar4 != 0x8000) {
      if (lVar3 != 0) break;
      if ((stream->_flags & 0x20U) == 0) goto LAB_001000bd;
      free(__ptr);
      goto LAB_00100118;
    }
    sm3_process_block(__ptr,0x8000,&ctx);
  } while( true );
  if ((stream->_flags & 0x10U) != 0) {
LAB_001000bd:
    if (uVar4 != 0) {
      sm3_process_bytes(__ptr,uVar4,&ctx);
    }
    sm3_finish_ctx(&ctx,resblock);
    free(__ptr);
    iVar2 = 0;
    goto LAB_001000d7;
  }
  goto LAB_0010006d;
}


