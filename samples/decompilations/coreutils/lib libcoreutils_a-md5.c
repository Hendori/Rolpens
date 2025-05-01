
/* WARNING: Unknown calling convention */

void md5_init_ctx(md5_ctx *ctx)

{
  MD5_Init((MD5_CTX *)ctx);
  return;
}



/* WARNING: Unknown calling convention */

void md5_process_bytes(void *buf,size_t len,md5_ctx *ctx)

{
  MD5_Update((MD5_CTX *)ctx,buf,len);
  return;
}



void md5_process_block(void *param_1,size_t param_2,MD5_CTX *param_3)

{
  MD5_Update(param_3,param_1,param_2);
  return;
}



/* WARNING: Unknown calling convention */

void * md5_finish_ctx(md5_ctx *ctx,void *res)

{
  MD5_Final((uchar *)res,(MD5_CTX *)ctx);
  return res;
}



/* WARNING: Unknown calling convention */

void * md5_buffer(char *buf,size_t len,void *res)

{
  uchar *puVar1;
  
  puVar1 = MD5((uchar *)buf,len,(uchar *)res);
  return puVar1;
}



/* WARNING: Unknown calling convention */

void * md5_read_ctx(md5_ctx *ctx,void *res)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  MD5_CTX tmp_ctx;
  
  tmp_ctx.A = (ctx->CTX).A;
  tmp_ctx.B = (ctx->CTX).B;
  tmp_ctx.C = (ctx->CTX).C;
  tmp_ctx.D = (ctx->CTX).D;
  tmp_ctx.Nl = (ctx->CTX).Nl;
  tmp_ctx.Nh = (ctx->CTX).Nh;
  tmp_ctx.data._0_8_ = *(undefined8 *)(ctx->CTX).data;
  tmp_ctx.data._8_8_ = *(undefined8 *)((ctx->CTX).data + 2);
  tmp_ctx.data._16_8_ = *(undefined8 *)((ctx->CTX).data + 4);
  tmp_ctx.data._24_8_ = *(undefined8 *)((ctx->CTX).data + 6);
  tmp_ctx.data._32_8_ = *(undefined8 *)((ctx->CTX).data + 8);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  tmp_ctx.data._40_8_ = *(undefined8 *)((ctx->CTX).data + 10);
  uVar2 = *(undefined8 *)((ctx->CTX).data + 0xd);
  tmp_ctx._84_8_ = *(undefined8 *)((ctx->CTX).data + 0xf);
  tmp_ctx.data[0xc] = (uint)*(undefined8 *)((ctx->CTX).data + 0xc);
  tmp_ctx.data[0xd] = (uint)uVar2;
  tmp_ctx.data[0xe] = (uint)((ulong)uVar2 >> 0x20);
  MD5_Final((uchar *)res,(MD5_CTX *)&tmp_ctx);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return res;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


