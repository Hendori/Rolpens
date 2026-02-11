
COMP_CTX * COMP_CTX_new(COMP_METHOD *meth)

{
  int iVar1;
  COMP_CTX *ctx;
  
  if ((meth != (COMP_METHOD *)0x0) &&
     (ctx = (COMP_CTX *)CRYPTO_zalloc(0x30,"crypto/comp/comp_lib.c",0x19), ctx != (COMP_CTX *)0x0))
  {
    ctx->meth = meth;
    if (meth->init == (_func_569 *)0x0) {
      return ctx;
    }
    iVar1 = (*meth->init)(ctx);
    if (iVar1 != 0) {
      return ctx;
    }
    CRYPTO_free(ctx);
  }
  return (COMP_CTX *)0x0;
}



undefined8 COMP_CTX_get_method(undefined8 *param_1)

{
  return *param_1;
}



undefined4 COMP_get_type(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 0;
}



undefined8 COMP_get_name(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 8);
  }
  return 0;
}



void COMP_CTX_free(COMP_CTX *ctx)

{
  _func_570 *p_Var1;
  
  if (ctx != (COMP_CTX *)0x0) {
    p_Var1 = ctx->meth->finish;
    if (p_Var1 != (_func_570 *)0x0) {
      (*p_Var1)(ctx);
    }
    CRYPTO_free(ctx);
    return;
  }
  return;
}



int COMP_compress_block(COMP_CTX *ctx,uchar *out,int olen,uchar *in,int ilen)

{
  _func_571 *p_Var1;
  int iVar2;
  
  p_Var1 = ctx->meth->compress;
  if (p_Var1 != (_func_571 *)0x0) {
    iVar2 = (*p_Var1)(ctx,out,olen,in,ilen);
    if (0 < iVar2) {
      ctx->compress_in = (long)ilen + ctx->compress_in;
      ctx->compress_out = (long)iVar2 + ctx->compress_out;
    }
    return iVar2;
  }
  return -1;
}



int COMP_expand_block(COMP_CTX *ctx,uchar *out,int olen,uchar *in,int ilen)

{
  _func_572 *p_Var1;
  int iVar2;
  
  p_Var1 = ctx->meth->expand;
  if (p_Var1 != (_func_572 *)0x0) {
    iVar2 = (*p_Var1)(ctx,out,olen,in,ilen);
    if (0 < iVar2) {
      ctx->expand_in = (long)ilen + ctx->expand_in;
      ctx->expand_out = (long)iVar2 + ctx->expand_out;
    }
    return iVar2;
  }
  return -1;
}



undefined4 COMP_CTX_get_type(undefined8 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)*param_1;
  }
  return uVar1;
}


