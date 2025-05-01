
/* WARNING: Unknown calling convention */

int blake2b_stream(FILE *stream,void *resstream,size_t outbytes)

{
  long lVar1;
  int iVar2;
  int iVar3;
  void *__ptr;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  blake2b_state S [1];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = malloc(0x8000);
  if (__ptr == (void *)0x0) {
    iVar2 = -1;
LAB_001000ed:
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar2;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  blake2b_init(S,outbytes);
  do {
    uVar6 = 0;
LAB_00100079:
    uVar5 = 0x8000;
    if (0x7fff < uVar6) {
      uVar5 = uVar6;
    }
    lVar4 = __fread_chk((long)__ptr + uVar6,uVar5 - uVar6,1,0x8000 - uVar6,stream);
    uVar6 = uVar6 + lVar4;
    if (uVar6 != 0x8000) {
      if (lVar4 != 0) break;
      iVar3 = ferror((FILE *)stream);
      iVar2 = -1;
      if (iVar3 == 0) goto LAB_001000ce;
      goto LAB_001000e5;
    }
    blake2b_update(S,__ptr,0x8000);
  } while( true );
  iVar2 = feof((FILE *)stream);
  if (iVar2 != 0) {
LAB_001000ce:
    if (uVar6 != 0) {
      blake2b_update(S,__ptr,uVar6);
    }
    iVar2 = 0;
    blake2b_final(S,resstream,outbytes);
LAB_001000e5:
    free(__ptr);
    goto LAB_001000ed;
  }
  goto LAB_00100079;
}


