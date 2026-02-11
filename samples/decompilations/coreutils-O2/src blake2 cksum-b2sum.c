
undefined8 blake2b_stream(FILE *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  void *__ptr;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined1 local_138 [248];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = malloc(0x8000);
  if (__ptr == (void *)0x0) {
    uVar3 = 0xffffffff;
LAB_001000ed:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  blake2b_init(local_138,param_3);
  do {
    uVar5 = 0;
LAB_00100079:
    uVar4 = 0x8000;
    if (0x7fff < uVar5) {
      uVar4 = uVar5;
    }
    lVar2 = __fread_chk((long)__ptr + uVar5,uVar4 - uVar5,1,0x8000 - uVar5,param_1);
    uVar5 = uVar5 + lVar2;
    if (uVar5 != 0x8000) {
      if (lVar2 != 0) break;
      iVar1 = ferror(param_1);
      uVar3 = 0xffffffff;
      if (iVar1 == 0) goto LAB_001000ce;
      goto LAB_001000e5;
    }
    blake2b_update(local_138,__ptr,0x8000);
  } while( true );
  iVar1 = feof(param_1);
  if (iVar1 != 0) {
LAB_001000ce:
    if (uVar5 != 0) {
      blake2b_update(local_138,__ptr,uVar5);
    }
    uVar3 = 0;
    blake2b_final(local_138,param_2,param_3);
LAB_001000e5:
    free(__ptr);
    goto LAB_001000ed;
  }
  goto LAB_00100079;
}


