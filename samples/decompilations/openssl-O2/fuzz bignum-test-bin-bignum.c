
undefined8 FuzzerInitialize(void)

{
  OPENSSL_init_crypto(2,0);
  ERR_clear_error();
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FuzzerTestOneInput(byte *param_1,ulong param_2)

{
  int iVar1;
  BIGNUM *ret;
  BIGNUM *ret_00;
  BIGNUM *ret_01;
  BIGNUM *r;
  BIGNUM *r_00;
  BN_CTX *ctx;
  BIGNUM *pBVar2;
  undefined8 uVar3;
  uint len;
  uint uVar4;
  long lVar7;
  uint local_40;
  uint local_3c;
  ulong uVar5;
  ulong uVar6;
  
  ret = BN_new();
  ret_00 = BN_new();
  ret_01 = BN_new();
  r = BN_new();
  r_00 = BN_new();
  ctx = BN_CTX_new();
  if (param_2 < 3) {
    local_3c = 0;
    len = 0;
    uVar6 = 0;
    uVar5 = 0;
    local_40 = 0;
    uVar4 = 0;
  }
  else {
    len = (uint)(((ulong)*param_1 * (param_2 - 3)) / 0xff) & 0x1ff;
    uVar5 = (ulong)len;
    lVar7 = (param_2 - 3) - uVar5;
    local_3c = param_1[2] & 4;
    local_40 = param_1[2] & 1;
    uVar4 = (uint)(((ulong)param_1[1] * lVar7) / 0xff) & 0x1ff;
    uVar6 = (ulong)uVar4;
    uVar4 = (int)lVar7 - uVar4 & 0x1ff;
    param_1 = param_1 + 3;
  }
  pBVar2 = BN_bin2bn(param_1,len,ret);
  if (ret == pBVar2) {
    BN_set_negative(ret,local_40);
    pBVar2 = BN_bin2bn(param_1 + uVar5,(int)uVar6,ret_00);
    if (ret_00 != pBVar2) goto LAB_0010031b;
    pBVar2 = BN_bin2bn(param_1 + uVar5 + uVar6,uVar4,ret_01);
    if (ret_01 != pBVar2) goto LAB_00100303;
    BN_set_negative(ret_01,local_3c);
    iVar1 = BN_is_zero(ret_01);
    if (iVar1 != 0) {
LAB_00100162:
      BN_free(ret);
      BN_free(ret_00);
      BN_free(ret_01);
      BN_free(r);
      BN_free(r_00);
      BN_CTX_free(ctx);
      ERR_clear_error();
      return 0;
    }
    iVar1 = BN_mod_exp(r,ret,ret_00,ret_01,ctx);
    if (iVar1 != 0) {
      iVar1 = BN_mod_exp_simple(r_00,ret,ret_00,ret_01,ctx);
      if (iVar1 == 0) goto LAB_0010034b;
      iVar1 = BN_cmp(r,r_00);
      if (iVar1 == 0) goto LAB_00100162;
      BN_print_fp(_stdout,ret);
      putc(10,_stdout);
      BN_print_fp(_stdout,ret_00);
      putc(10,_stdout);
      BN_print_fp(_stdout,ret_01);
      putc(10,_stdout);
      BN_print_fp(_stdout,r);
      putc(10,_stdout);
      BN_print_fp(_stdout,r_00);
      putc(10,_stdout);
      OPENSSL_die("assertion failed: success","fuzz/bignum.c",0x60);
      goto LAB_001002eb;
    }
  }
  else {
LAB_001002eb:
    OPENSSL_die("assertion failed: BN_bin2bn(buf, l1, b1) == b1","fuzz/bignum.c",0x42);
LAB_00100303:
    OPENSSL_die("assertion failed: BN_bin2bn(buf + l1 + l2, l3, b3) == b3","fuzz/bignum.c",0x45);
LAB_0010031b:
    OPENSSL_die("assertion failed: BN_bin2bn(buf + l1, l2, b2) == b2","fuzz/bignum.c",0x44);
  }
  OPENSSL_die("assertion failed: BN_mod_exp(b4, b1, b2, b3, ctx)","fuzz/bignum.c",0x4e);
LAB_0010034b:
  uVar3 = OPENSSL_die("assertion failed: BN_mod_exp_simple(b5, b1, b2, b3, ctx)","fuzz/bignum.c",
                      0x4f);
  return uVar3;
}



void FuzzerCleanup(void)

{
  return;
}


