
uint test_afalg_aes_cbc(int param_1)

{
  uint uVar1;
  int iVar2;
  EVP_CIPHER *cipher;
  EVP_CIPHER_CTX *ctx;
  undefined1 *puVar3;
  long in_FS_OFFSET;
  uchar *puVar4;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  uchar local_b8 [64];
  uchar local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 1) {
    cipher = EVP_aes_192_cbc();
    puVar3 = encresult_192_4;
  }
  else if (param_1 == 2) {
    cipher = EVP_aes_256_cbc();
    puVar3 = encresult_256_3;
  }
  else if (param_1 == 0) {
    cipher = EVP_aes_128_cbc();
    puVar3 = encresult_128_5;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    cipher = (EVP_CIPHER *)0x0;
  }
  ctx = EVP_CIPHER_CTX_new();
  uVar1 = test_ptr("test/afalgtest.c",0x52,"ctx = EVP_CIPHER_CTX_new()",ctx);
  if (uVar1 == 0) goto LAB_00100114;
  iVar2 = EVP_CipherInit_ex(ctx,cipher,e,key_2,iv_1,1);
  iVar2 = test_true("test/afalgtest.c",0x55,"EVP_CipherInit_ex(ctx, cipher, e, key, iv, 1)",
                    iVar2 != 0);
  if (iVar2 == 0) {
LAB_00100109:
    uVar1 = 0;
  }
  else {
    iVar2 = EVP_CipherUpdate(ctx,local_b8,&local_c8,(uchar *)"Single block msg\n",0x11);
    iVar2 = test_true("test/afalgtest.c",0x56,"EVP_CipherUpdate(ctx, ebuf, &encl, in, BUFFER_SIZE)",
                      iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100109;
    iVar2 = EVP_CipherFinal_ex(ctx,local_b8 + local_c8,&local_c4);
    iVar2 = test_true("test/afalgtest.c",0x57,"EVP_CipherFinal_ex(ctx, ebuf + encl, &encf)",
                      iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100109;
    local_c8 = local_c8 + local_c4;
    puVar4 = local_b8;
    iVar2 = test_mem_eq("test/afalgtest.c",0x5b,"enc_result",&_LC5,puVar3,0x11,local_b8,0x11);
    if (iVar2 == 0) goto LAB_00100109;
    iVar2 = EVP_CIPHER_CTX_reset(ctx,puVar4);
    iVar2 = test_true("test/afalgtest.c",0x5e,"EVP_CIPHER_CTX_reset(ctx)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100109;
    iVar2 = EVP_CipherInit_ex(ctx,cipher,e,key_2,iv_1,0);
    iVar2 = test_true("test/afalgtest.c",0x5f,"EVP_CipherInit_ex(ctx, cipher, e, key, iv, 0)",
                      iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100109;
    iVar2 = EVP_CipherUpdate(ctx,local_78,&local_c0,local_b8,local_c8);
    iVar2 = test_true("test/afalgtest.c",0x60,"EVP_CipherUpdate(ctx, dbuf, &decl, ebuf, encl)",
                      iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100109;
    iVar2 = EVP_CipherFinal_ex(ctx,local_78 + local_c0,&local_bc);
    iVar2 = test_true("test/afalgtest.c",0x61,"EVP_CipherFinal_ex(ctx, dbuf + decl, &decf)",
                      iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100109;
    local_c0 = local_bc + local_c0;
    iVar2 = test_int_eq("test/afalgtest.c",0x65,&_LC12,"BUFFER_SIZE",local_c0,0x11);
    if (iVar2 == 0) goto LAB_00100109;
    iVar2 = test_mem_eq("test/afalgtest.c",0x66,&_LC14,&_LC13,local_78,0x11,"Single block msg\n",
                        0x11);
    uVar1 = (uint)(iVar2 != 0);
  }
  EVP_CIPHER_CTX_free(ctx);
LAB_00100114:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int test_pr16743(void)

{
  int iVar1;
  EVP_CIPHER *cipher;
  EVP_CIPHER_CTX *ctx;
  bool bVar2;
  
  ENGINE_init(e);
  iVar1 = test_true("test/afalgtest.c",0x76,"ENGINE_init(e)");
  if (iVar1 == 0) {
    return 0;
  }
  cipher = ENGINE_get_cipher(e,0x1a3);
  ctx = EVP_CIPHER_CTX_new();
  if ((cipher == (EVP_CIPHER *)0x0) || (ctx == (EVP_CIPHER_CTX *)0x0)) {
    bVar2 = false;
    iVar1 = 0;
  }
  else {
    iVar1 = EVP_EncryptInit_ex(ctx,cipher,e,(uchar *)0x0,(uchar *)0x0);
    bVar2 = iVar1 != 0;
  }
  test_true("test/afalgtest.c",0x7c,&_LC16,bVar2);
  EVP_CIPHER_CTX_free(ctx);
  ENGINE_finish(e);
  return iVar1;
}



undefined8 global_init(void)

{
  ENGINE_load_builtin_engines();
  return 1;
}



undefined8 setup_tests(void)

{
  e = ENGINE_by_id("afalg");
  if (e != (ENGINE *)0x0) {
    add_all_tests("test_afalg_aes_cbc",0x100000,3,1);
    add_test("test_pr16743",test_pr16743);
    return 1;
  }
  test_info("test/afalgtest.c",0x91,"Can\'t load AFALG engine");
  return 1;
}



void cleanup_tests(void)

{
  ENGINE_free(e);
  return;
}


