
/* WARNING: Unknown calling convention */

int sha1_stream(FILE *stream,void *resblock)

{
  long lVar1;
  int iVar2;
  void *data;
  long lVar3;
  size_t len;
  ulong uVar4;
  long in_FS_OFFSET;
  sha1_ctx ctx;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  data = malloc(0x8048);
  if (data == (void *)0x0) {
LAB_001000f6:
    iVar2 = 1;
LAB_001000af:
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar2;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  SHA1_Init((SHA_CTX *)&ctx);
  do {
    len = 0;
LAB_0010008f:
    if ((stream->_flags & 0x10) != 0) goto LAB_00100095;
    uVar4 = 0x8048;
    if (0x8047 < len) {
      uVar4 = len;
    }
    lVar3 = __fread_unlocked_chk((long)data + len,uVar4 - len,1,0x8000 - len,stream);
    len = len + lVar3;
    if (len != 0x8000) break;
    SHA1_Update((SHA_CTX *)&ctx,data,0x8000);
  } while( true );
  if (lVar3 == 0) {
    if ((stream->_flags & 0x20) != 0) {
      free(data);
      goto LAB_001000f6;
    }
LAB_00100095:
    if (len != 0) {
      SHA1_Update((SHA_CTX *)&ctx,data,len);
    }
    SHA1_Final((uchar *)resblock,(SHA_CTX *)&ctx);
    free(data);
    iVar2 = 0;
    goto LAB_001000af;
  }
  goto LAB_0010008f;
}


