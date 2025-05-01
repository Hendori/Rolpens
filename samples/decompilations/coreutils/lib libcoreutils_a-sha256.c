
/* WARNING: Unknown calling convention */

void sha224_init_ctx(sha256_ctx *ctx)

{
  SHA224_Init((SHA256_CTX *)ctx);
  return;
}



/* WARNING: Unknown calling convention */

void * sha224_finish_ctx(sha256_ctx *ctx,void *res)

{
  SHA224_Final((uchar *)res,(SHA256_CTX *)ctx);
  return res;
}



/* WARNING: Unknown calling convention */

void * sha224_buffer(char *buf,size_t len,void *res)

{
  uchar *puVar1;
  
  puVar1 = SHA224((uchar *)buf,len,(uchar *)res);
  return puVar1;
}



/* WARNING: Unknown calling convention */

void * sha224_read_ctx(sha256_ctx *ctx,void *res)

{
  long lVar1;
  long in_FS_OFFSET;
  SHA256_CTX tmp_ctx;
  
  tmp_ctx.h._0_8_ = *(undefined8 *)(ctx->CTX).h;
  tmp_ctx.h._8_8_ = *(undefined8 *)((ctx->CTX).h + 2);
  tmp_ctx.h._16_8_ = *(undefined8 *)((ctx->CTX).h + 4);
  tmp_ctx.h._24_8_ = *(undefined8 *)((ctx->CTX).h + 6);
  tmp_ctx.Nl = (ctx->CTX).Nl;
  tmp_ctx.Nh = (ctx->CTX).Nh;
  tmp_ctx.data._0_8_ = *(undefined8 *)(ctx->CTX).data;
  tmp_ctx.data._8_8_ = *(undefined8 *)((ctx->CTX).data + 2);
  tmp_ctx.data._16_8_ = *(undefined8 *)((ctx->CTX).data + 4);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  tmp_ctx.data._24_8_ = *(undefined8 *)((ctx->CTX).data + 6);
  tmp_ctx.data._32_8_ = *(undefined8 *)((ctx->CTX).data + 8);
  tmp_ctx.data._40_8_ = *(undefined8 *)((ctx->CTX).data + 10);
  tmp_ctx.data._48_8_ = *(undefined8 *)((ctx->CTX).data + 0xc);
  tmp_ctx.data._56_8_ = *(undefined8 *)((ctx->CTX).data + 0xe);
  tmp_ctx.num = (ctx->CTX).num;
  tmp_ctx.md_len = (ctx->CTX).md_len;
  SHA224_Final((uchar *)res,(SHA256_CTX *)&tmp_ctx);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return res;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void sha256_init_ctx(sha256_ctx *ctx)

{
  SHA256_Init((SHA256_CTX *)ctx);
  return;
}



/* WARNING: Unknown calling convention */

void sha256_process_bytes(void *buf,size_t len,sha256_ctx *ctx)

{
  SHA256_Update((SHA256_CTX *)ctx,buf,len);
  return;
}



void sha256_process_block(void *param_1,size_t param_2,SHA256_CTX *param_3)

{
  SHA256_Update(param_3,param_1,param_2);
  return;
}



/* WARNING: Unknown calling convention */

void * sha256_finish_ctx(sha256_ctx *ctx,void *res)

{
  SHA256_Final((uchar *)res,(SHA256_CTX *)ctx);
  return res;
}



/* WARNING: Unknown calling convention */

void * sha256_buffer(char *buf,size_t len,void *res)

{
  uchar *puVar1;
  
  puVar1 = SHA256((uchar *)buf,len,(uchar *)res);
  return puVar1;
}



/* WARNING: Unknown calling convention */

void * sha256_read_ctx(sha256_ctx *ctx,void *res)

{
  long lVar1;
  long in_FS_OFFSET;
  SHA256_CTX tmp_ctx;
  
  tmp_ctx.h._0_8_ = *(undefined8 *)(ctx->CTX).h;
  tmp_ctx.h._8_8_ = *(undefined8 *)((ctx->CTX).h + 2);
  tmp_ctx.h._16_8_ = *(undefined8 *)((ctx->CTX).h + 4);
  tmp_ctx.h._24_8_ = *(undefined8 *)((ctx->CTX).h + 6);
  tmp_ctx.Nl = (ctx->CTX).Nl;
  tmp_ctx.Nh = (ctx->CTX).Nh;
  tmp_ctx.data._0_8_ = *(undefined8 *)(ctx->CTX).data;
  tmp_ctx.data._8_8_ = *(undefined8 *)((ctx->CTX).data + 2);
  tmp_ctx.data._16_8_ = *(undefined8 *)((ctx->CTX).data + 4);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  tmp_ctx.data._24_8_ = *(undefined8 *)((ctx->CTX).data + 6);
  tmp_ctx.data._32_8_ = *(undefined8 *)((ctx->CTX).data + 8);
  tmp_ctx.data._40_8_ = *(undefined8 *)((ctx->CTX).data + 10);
  tmp_ctx.data._48_8_ = *(undefined8 *)((ctx->CTX).data + 0xc);
  tmp_ctx.data._56_8_ = *(undefined8 *)((ctx->CTX).data + 0xe);
  tmp_ctx.num = (ctx->CTX).num;
  tmp_ctx.md_len = (ctx->CTX).md_len;
  SHA256_Final((uchar *)res,(SHA256_CTX *)&tmp_ctx);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return res;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


