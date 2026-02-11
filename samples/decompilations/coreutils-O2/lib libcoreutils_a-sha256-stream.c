
undefined8 shaxxx_stream_isra_0(byte *param_1,undefined8 param_2,code *param_3,code *param_4)

{
  void *data;
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  size_t len;
  long in_FS_OFFSET;
  SHA256_CTX local_b8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  data = malloc(0x8048);
  if (data == (void *)0x0) {
LAB_00100105:
    uVar2 = 1;
LAB_001000b7:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  (*param_3)(&local_b8);
  do {
    len = 0;
LAB_00100098:
    if ((*param_1 & 0x10) != 0) goto LAB_0010009d;
    uVar3 = 0x8048;
    if (0x8047 < len) {
      uVar3 = len;
    }
    lVar1 = __fread_unlocked_chk((long)data + len,uVar3 - len,1,0x8000 - len,param_1);
    len = len + lVar1;
    if (len != 0x8000) break;
    SHA256_Update(&local_b8,data,0x8000);
  } while( true );
  if (lVar1 == 0) {
    if ((*param_1 & 0x20) != 0) {
      free(data);
      goto LAB_00100105;
    }
LAB_0010009d:
    if (len != 0) {
      SHA256_Update(&local_b8,data,len);
    }
    (*param_4)(&local_b8,param_2);
    free(data);
    uVar2 = 0;
    goto LAB_001000b7;
  }
  goto LAB_00100098;
}



void sha256_stream(undefined8 param_1,undefined8 param_2)

{
  shaxxx_stream_isra_0(param_1,param_2,&sha256_init_ctx,&sha256_finish_ctx);
  return;
}



void sha224_stream(undefined8 param_1,undefined8 param_2)

{
  shaxxx_stream_isra_0(param_1,param_2,&sha224_init_ctx,&sha224_finish_ctx);
  return;
}


