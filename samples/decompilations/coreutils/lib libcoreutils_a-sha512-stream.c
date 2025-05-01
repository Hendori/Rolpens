
int shaxxx_stream(FILE *stream,char *alg,void *resblock,ssize_t hashlen,
                 _func_void_sha512_ctx_ptr *init_ctx,
                 _func_void_ptr_sha512_ctx_ptr_void_ptr *finish_ctx)

{
  long lVar1;
  int iVar2;
  void *data;
  long lVar3;
  ulong uVar4;
  size_t len;
  long in_FS_OFFSET;
  sha512_ctx ctx;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  data = malloc(0x8048);
  if (data == (void *)0x0) {
LAB_00100105:
    iVar2 = 1;
LAB_001000b7:
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar2;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  (*(code *)resblock)((SHA512_CTX *)&ctx);
  do {
    len = 0;
LAB_00100098:
    if ((stream->_flags & 0x10) != 0) goto LAB_0010009d;
    uVar4 = 0x8048;
    if (0x8047 < len) {
      uVar4 = len;
    }
    lVar3 = __fread_unlocked_chk((long)data + len,uVar4 - len,1,0x8000 - len,stream);
    len = len + lVar3;
    if (len != 0x8000) break;
    SHA512_Update((SHA512_CTX *)&ctx,data,0x8000);
  } while( true );
  if (lVar3 == 0) {
    if ((stream->_flags & 0x20) != 0) {
      free(data);
      goto LAB_00100105;
    }
LAB_0010009d:
    if (len != 0) {
      SHA512_Update((SHA512_CTX *)&ctx,data,len);
    }
    (*(code *)hashlen)((SHA512_CTX *)&ctx,alg);
    free(data);
    iVar2 = 0;
    goto LAB_001000b7;
  }
  goto LAB_00100098;
}



/* WARNING: Unknown calling convention */

int sha512_stream(FILE *stream,void *resblock)

{
  int iVar1;
  _func_void_sha512_ctx_ptr *in_R8;
  _func_void_ptr_sha512_ctx_ptr_void_ptr *in_R9;
  
  iVar1 = shaxxx_stream(stream,(char *)resblock,&sha512_init_ctx,0x101028,in_R8,in_R9);
  return iVar1;
}



/* WARNING: Unknown calling convention */

int sha384_stream(FILE *stream,void *resblock)

{
  int iVar1;
  _func_void_sha512_ctx_ptr *in_R8;
  _func_void_ptr_sha512_ctx_ptr_void_ptr *in_R9;
  
  iVar1 = shaxxx_stream(stream,(char *)resblock,&sha384_init_ctx,0x101038,in_R8,in_R9);
  return iVar1;
}


