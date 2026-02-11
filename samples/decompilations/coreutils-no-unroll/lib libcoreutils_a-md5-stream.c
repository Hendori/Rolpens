
undefined8 md5_stream(byte *param_1,uchar *param_2)

{
  void *data;
  long lVar1;
  undefined8 uVar2;
  size_t len;
  ulong uVar3;
  long in_FS_OFFSET;
  MD5_CTX MStack_a8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  data = malloc(0x8048);
  if (data == (void *)0x0) {
LAB_001000f6:
    uVar2 = 1;
LAB_001000af:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  MD5_Init(&MStack_a8);
  do {
    len = 0;
LAB_0010008f:
    if ((*param_1 & 0x10) != 0) goto LAB_00100095;
    uVar3 = 0x8048;
    if (0x8047 < len) {
      uVar3 = len;
    }
    lVar1 = __fread_unlocked_chk((long)data + len,uVar3 - len,1,0x8000 - len,param_1);
    len = len + lVar1;
    if (len != 0x8000) break;
    MD5_Update(&MStack_a8,data,0x8000);
  } while( true );
  if (lVar1 == 0) {
    if ((*param_1 & 0x20) != 0) {
      free(data);
      goto LAB_001000f6;
    }
LAB_00100095:
    if (len != 0) {
      MD5_Update(&MStack_a8,data,len);
    }
    MD5_Final(param_2,&MStack_a8);
    free(data);
    uVar2 = 0;
    goto LAB_001000af;
  }
  goto LAB_0010008f;
}


