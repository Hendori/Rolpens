/* WARNING: Unknown calling convention */void sha384_init_ctx(sha512_ctx *ctx) {
   SHA384_Init((SHA512_CTX*)ctx);
   return;
}
/* WARNING: Unknown calling convention */void *sha384_finish_ctx(sha512_ctx *ctx, void *res) {
   SHA384_Final((uchar*)res, (SHA512_CTX*)ctx);
   return res;
}
/* WARNING: Unknown calling convention */void *sha384_buffer(char *buf, size_t len, void *res) {
   uchar *puVar1;
   puVar1 = SHA384((uchar*)buf, len, (uchar*)res);
   return puVar1;
}
/* WARNING: Unknown calling convention */void *sha384_read_ctx(sha512_ctx *ctx, void *res) {
   long lVar1;
   long in_FS_OFFSET;
   SHA512_CTX tmp_ctx;
   for (int i = 0; i < 4; i++) {
      tmp_ctx.h[i] = (ctx->CTX).h[i];
   }

   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   for (int i = 0; i < 4; i++) {
      tmp_ctx.h[( i + 4 )] = (ctx->CTX).h[( i + 4 )];
   }

   tmp_ctx.Nl = (ctx->CTX).Nl;
   tmp_ctx.Nh = (ctx->CTX).Nh;
   for (int i = 0; i < 16; i++) {
      tmp_ctx.u.d[i] = (ctx->CTX).u.d[i];
   }

   tmp_ctx.num = (ctx->CTX).num;
   tmp_ctx.md_len = (ctx->CTX).md_len;
   SHA384_Final((uchar*)res, (SHA512_CTX*)&tmp_ctx);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return res;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */void sha512_init_ctx(sha512_ctx *ctx) {
   SHA512_Init((SHA512_CTX*)ctx);
   return;
}
/* WARNING: Unknown calling convention */void sha512_process_bytes(void *buf, size_t len, sha512_ctx *ctx) {
   SHA512_Update((SHA512_CTX*)ctx, buf, len);
   return;
}
void sha512_process_block(void *param_1, size_t param_2, SHA512_CTX *param_3) {
   SHA512_Update(param_3, param_1, param_2);
   return;
}
/* WARNING: Unknown calling convention */void *sha512_finish_ctx(sha512_ctx *ctx, void *res) {
   SHA512_Final((uchar*)res, (SHA512_CTX*)ctx);
   return res;
}
/* WARNING: Unknown calling convention */void *sha512_buffer(char *buf, size_t len, void *res) {
   uchar *puVar1;
   puVar1 = SHA512((uchar*)buf, len, (uchar*)res);
   return puVar1;
}
/* WARNING: Unknown calling convention */void *sha512_read_ctx(sha512_ctx *ctx, void *res) {
   long lVar1;
   long in_FS_OFFSET;
   SHA512_CTX tmp_ctx;
   for (int i = 0; i < 4; i++) {
      tmp_ctx.h[i] = (ctx->CTX).h[i];
   }

   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   for (int i = 0; i < 4; i++) {
      tmp_ctx.h[( i + 4 )] = (ctx->CTX).h[( i + 4 )];
   }

   tmp_ctx.Nl = (ctx->CTX).Nl;
   tmp_ctx.Nh = (ctx->CTX).Nh;
   for (int i = 0; i < 16; i++) {
      tmp_ctx.u.d[i] = (ctx->CTX).u.d[i];
   }

   tmp_ctx.num = (ctx->CTX).num;
   tmp_ctx.md_len = (ctx->CTX).md_len;
   SHA512_Final((uchar*)res, (SHA512_CTX*)&tmp_ctx);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return res;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

