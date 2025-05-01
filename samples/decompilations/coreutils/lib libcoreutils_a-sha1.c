
/* WARNING: Unknown calling convention */

void sha1_init_ctx(sha1_ctx *ctx)

{
  SHA1_Init((SHA_CTX *)ctx);
  return;
}



/* WARNING: Unknown calling convention */

void sha1_process_bytes(void *buf,size_t len,sha1_ctx *ctx)

{
  SHA1_Update((SHA_CTX *)ctx,buf,len);
  return;
}



void sha1_process_block(void *param_1,size_t param_2,SHA_CTX *param_3)

{
  SHA1_Update(param_3,param_1,param_2);
  return;
}



/* WARNING: Unknown calling convention */

void * sha1_finish_ctx(sha1_ctx *ctx,void *res)

{
  SHA1_Final((uchar *)res,(SHA_CTX *)ctx);
  return res;
}



/* WARNING: Unknown calling convention */

void * sha1_buffer(char *buf,size_t len,void *res)

{
  uchar *puVar1;
  
  puVar1 = SHA1((uchar *)buf,len,(uchar *)res);
  return puVar1;
}



/* WARNING: Unknown calling convention */

void * sha1_read_ctx(sha1_ctx *ctx,void *res)

{
  long lVar1;
  long in_FS_OFFSET;
  SHA_CTX tmp_ctx;
  
  tmp_ctx.h0 = (ctx->CTX).h0;
  tmp_ctx.h1 = (ctx->CTX).h1;
  tmp_ctx.h2 = (ctx->CTX).h2;
  tmp_ctx.h3 = (ctx->CTX).h3;
  tmp_ctx.h4 = (ctx->CTX).h4;
  tmp_ctx.Nl = (ctx->CTX).Nl;
  tmp_ctx.Nh = (ctx->CTX).Nh;
  tmp_ctx.data[0] = (ctx->CTX).data[0];
  tmp_ctx.data._4_8_ = *(undefined8 *)((ctx->CTX).data + 1);
  tmp_ctx.data._12_8_ = *(undefined8 *)((ctx->CTX).data + 3);
  tmp_ctx.data._20_8_ = *(undefined8 *)((ctx->CTX).data + 5);
  tmp_ctx.data._28_8_ = *(undefined8 *)((ctx->CTX).data + 7);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  tmp_ctx.data._36_8_ = *(undefined8 *)((ctx->CTX).data + 9);
  tmp_ctx.data._44_8_ = *(undefined8 *)((ctx->CTX).data + 0xb);
  tmp_ctx.data._52_8_ = *(undefined8 *)((ctx->CTX).data + 0xd);
  tmp_ctx._88_8_ = *(undefined8 *)((ctx->CTX).data + 0xf);
  SHA1_Final((uchar *)res,(SHA_CTX *)&tmp_ctx);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return res;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


