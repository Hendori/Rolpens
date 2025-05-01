
/* WARNING: Unknown calling convention */

void sha384_init_ctx(sha512_ctx *ctx)

{
  SHA384_Init((SHA512_CTX *)ctx);
  return;
}



/* WARNING: Unknown calling convention */

void * sha384_finish_ctx(sha512_ctx *ctx,void *res)

{
  SHA384_Final((uchar *)res,(SHA512_CTX *)ctx);
  return res;
}



/* WARNING: Unknown calling convention */

void * sha384_buffer(char *buf,size_t len,void *res)

{
  uchar *puVar1;
  
  puVar1 = SHA384((uchar *)buf,len,(uchar *)res);
  return puVar1;
}



/* WARNING: Unknown calling convention */

void * sha384_read_ctx(sha512_ctx *ctx,void *res)

{
  long lVar1;
  long in_FS_OFFSET;
  SHA512_CTX tmp_ctx;
  
  tmp_ctx.h[0] = (ctx->CTX).h[0];
  tmp_ctx.h[1] = (ctx->CTX).h[1];
  tmp_ctx.h[2] = (ctx->CTX).h[2];
  tmp_ctx.h[3] = (ctx->CTX).h[3];
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  tmp_ctx.h[4] = (ctx->CTX).h[4];
  tmp_ctx.h[5] = (ctx->CTX).h[5];
  tmp_ctx.h[6] = (ctx->CTX).h[6];
  tmp_ctx.h[7] = (ctx->CTX).h[7];
  tmp_ctx.Nl = (ctx->CTX).Nl;
  tmp_ctx.Nh = (ctx->CTX).Nh;
  tmp_ctx.u.d[0] = (ctx->CTX).u.d[0];
  tmp_ctx.u.d[1] = (ctx->CTX).u.d[1];
  tmp_ctx.u.d[2] = (ctx->CTX).u.d[2];
  tmp_ctx.u.d[3] = (ctx->CTX).u.d[3];
  tmp_ctx.u.d[4] = (ctx->CTX).u.d[4];
  tmp_ctx.u.d[5] = (ctx->CTX).u.d[5];
  tmp_ctx.u.d[6] = (ctx->CTX).u.d[6];
  tmp_ctx.u.d[7] = (ctx->CTX).u.d[7];
  tmp_ctx.u.d[8] = (ctx->CTX).u.d[8];
  tmp_ctx.u.d[9] = (ctx->CTX).u.d[9];
  tmp_ctx.u.d[10] = (ctx->CTX).u.d[10];
  tmp_ctx.u.d[0xb] = (ctx->CTX).u.d[0xb];
  tmp_ctx.u.d[0xc] = (ctx->CTX).u.d[0xc];
  tmp_ctx.u.d[0xd] = (ctx->CTX).u.d[0xd];
  tmp_ctx.u.d[0xe] = (ctx->CTX).u.d[0xe];
  tmp_ctx.u.d[0xf] = (ctx->CTX).u.d[0xf];
  tmp_ctx.num = (ctx->CTX).num;
  tmp_ctx.md_len = (ctx->CTX).md_len;
  SHA384_Final((uchar *)res,(SHA512_CTX *)&tmp_ctx);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return res;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void sha512_init_ctx(sha512_ctx *ctx)

{
  SHA512_Init((SHA512_CTX *)ctx);
  return;
}



/* WARNING: Unknown calling convention */

void sha512_process_bytes(void *buf,size_t len,sha512_ctx *ctx)

{
  SHA512_Update((SHA512_CTX *)ctx,buf,len);
  return;
}



void sha512_process_block(void *param_1,size_t param_2,SHA512_CTX *param_3)

{
  SHA512_Update(param_3,param_1,param_2);
  return;
}



/* WARNING: Unknown calling convention */

void * sha512_finish_ctx(sha512_ctx *ctx,void *res)

{
  SHA512_Final((uchar *)res,(SHA512_CTX *)ctx);
  return res;
}



/* WARNING: Unknown calling convention */

void * sha512_buffer(char *buf,size_t len,void *res)

{
  uchar *puVar1;
  
  puVar1 = SHA512((uchar *)buf,len,(uchar *)res);
  return puVar1;
}



/* WARNING: Unknown calling convention */

void * sha512_read_ctx(sha512_ctx *ctx,void *res)

{
  long lVar1;
  long in_FS_OFFSET;
  SHA512_CTX tmp_ctx;
  
  tmp_ctx.h[0] = (ctx->CTX).h[0];
  tmp_ctx.h[1] = (ctx->CTX).h[1];
  tmp_ctx.h[2] = (ctx->CTX).h[2];
  tmp_ctx.h[3] = (ctx->CTX).h[3];
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  tmp_ctx.h[4] = (ctx->CTX).h[4];
  tmp_ctx.h[5] = (ctx->CTX).h[5];
  tmp_ctx.h[6] = (ctx->CTX).h[6];
  tmp_ctx.h[7] = (ctx->CTX).h[7];
  tmp_ctx.Nl = (ctx->CTX).Nl;
  tmp_ctx.Nh = (ctx->CTX).Nh;
  tmp_ctx.u.d[0] = (ctx->CTX).u.d[0];
  tmp_ctx.u.d[1] = (ctx->CTX).u.d[1];
  tmp_ctx.u.d[2] = (ctx->CTX).u.d[2];
  tmp_ctx.u.d[3] = (ctx->CTX).u.d[3];
  tmp_ctx.u.d[4] = (ctx->CTX).u.d[4];
  tmp_ctx.u.d[5] = (ctx->CTX).u.d[5];
  tmp_ctx.u.d[6] = (ctx->CTX).u.d[6];
  tmp_ctx.u.d[7] = (ctx->CTX).u.d[7];
  tmp_ctx.u.d[8] = (ctx->CTX).u.d[8];
  tmp_ctx.u.d[9] = (ctx->CTX).u.d[9];
  tmp_ctx.u.d[10] = (ctx->CTX).u.d[10];
  tmp_ctx.u.d[0xb] = (ctx->CTX).u.d[0xb];
  tmp_ctx.u.d[0xc] = (ctx->CTX).u.d[0xc];
  tmp_ctx.u.d[0xd] = (ctx->CTX).u.d[0xd];
  tmp_ctx.u.d[0xe] = (ctx->CTX).u.d[0xe];
  tmp_ctx.u.d[0xf] = (ctx->CTX).u.d[0xf];
  tmp_ctx.num = (ctx->CTX).num;
  tmp_ctx.md_len = (ctx->CTX).md_len;
  SHA512_Final((uchar *)res,(SHA512_CTX *)&tmp_ctx);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return res;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


