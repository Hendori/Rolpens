
undefined8 sha512_stream(byte *param_1,uchar *param_2)

{
  void *data;
  long lVar1;
  undefined8 uVar2;
  size_t len;
  ulong uVar3;
  long in_FS_OFFSET;
  SHA512_CTX SStack_118;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  data = malloc(0x8048);
  if (data == (void *)0x0) {
LAB_00100106:
    uVar2 = 1;
LAB_001000b7:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  SHA512_Init(&SStack_118);
  do {
    len = 0;
LAB_00100097:
    if ((*param_1 & 0x10) != 0) goto LAB_0010009d;
    uVar3 = 0x8048;
    if (0x8047 < len) {
      uVar3 = len;
    }
    lVar1 = __fread_unlocked_chk((long)data + len,uVar3 - len,1,0x8000 - len,param_1);
    len = len + lVar1;
    if (len != 0x8000) break;
    SHA512_Update(&SStack_118,data,0x8000);
  } while( true );
  if (lVar1 == 0) {
    if ((*param_1 & 0x20) != 0) {
      free(data);
      goto LAB_00100106;
    }
LAB_0010009d:
    if (len != 0) {
      SHA512_Update(&SStack_118,data,len);
    }
    SHA512_Final(param_2,&SStack_118);
    free(data);
    uVar2 = 0;
    goto LAB_001000b7;
  }
  goto LAB_00100097;
}



undefined8 sha384_stream(byte *param_1,uchar *param_2)

{
  void *data;
  long lVar1;
  undefined8 uVar2;
  size_t len;
  ulong uVar3;
  long in_FS_OFFSET;
  SHA512_CTX SStack_118;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  data = malloc(0x8048);
  if (data == (void *)0x0) {
LAB_00100236:
    uVar2 = 1;
LAB_001001e7:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  SHA384_Init(&SStack_118);
  do {
    len = 0;
LAB_001001c7:
    if ((*param_1 & 0x10) != 0) goto LAB_001001cd;
    uVar3 = 0x8048;
    if (0x8047 < len) {
      uVar3 = len;
    }
    lVar1 = __fread_unlocked_chk((long)data + len,uVar3 - len,1,0x8000 - len,param_1);
    len = len + lVar1;
    if (len != 0x8000) break;
    SHA512_Update(&SStack_118,data,0x8000);
  } while( true );
  if (lVar1 == 0) {
    if ((*param_1 & 0x20) != 0) {
      free(data);
      goto LAB_00100236;
    }
LAB_001001cd:
    if (len != 0) {
      SHA512_Update(&SStack_118,data,len);
    }
    SHA384_Final(param_2,&SStack_118);
    free(data);
    uVar2 = 0;
    goto LAB_001001e7;
  }
  goto LAB_001001c7;
}


